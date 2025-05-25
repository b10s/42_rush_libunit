/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:21:53 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 23:03:57 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//TODO: remove dbg prints
//TODO: error handling like malloc, etc

#include "./libunit.h"
#include "./ft_printf/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void	load_test(t_unit_test *test_list, char *test_name, int (*test_f)(void))
{
	while (test_list->next != NULL)
		test_list = test_list->next;
	if (test_list->name != NULL)
	{
		test_list->next = malloc(sizeof(t_unit_test));
		test_list = test_list->next;
	}
	test_list->name = test_name;
	test_list->test_f = test_f;
	test_list->next = NULL;
}

void	child(t_unit_test *t)
{
	int	test_res;

	test_res = t->test_f();
	if (test_res == 0)
		exit(0);
	exit(1);
}

char	*decode_status(int status)
{
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
			return ("OK");
		else
			return ("KO");
	}
	else
	{
		if (WTERMSIG(status) == SIGSEGV)
			return ("SIGSEGV");
		if (WTERMSIG(status) == SIGBUS)
			return ("SIGBUS");
	}
	return ("WTF :)");
}

int	parent(char *f_name, char *t_name)
{
	int	status;
	int	ret;

	ret = 0;
	wait(&status);
	ft_printf("[%s]:[%s]:", f_name, t_name);
	if (status == 0)
		ret = 1;
	ft_printf("[%s]\n", decode_status(status));
	return (ret);
}

int	launch_test(t_unit_test *test_list, char *test_func_name)
{
	pid_t	pid;
	int		res;
	int		test_cnt;
	int		succeed_test;

	res = 0;
	test_cnt = 0;
	succeed_test = 0;
	while (test_list != NULL)
	{
		pid = fork();
		if (pid < 0)
			return (-1);
		else if (pid == 0)
			child(test_list);
		else if (pid > 0)
			succeed_test += parent(test_func_name, test_list->name);
		test_cnt++;
		test_list = test_list->next;
	}
	if (test_cnt == succeed_test)
		return (0);
	else
		return (-1);
}
