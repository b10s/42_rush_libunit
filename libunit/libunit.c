#include "./libunit.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

void	load_test(t_unit_test *test_list, char *test_name, int (*test_f)(void))
{
	printf("loading test..\n");
	while(test_list->next != NULL)
		test_list = test_list->next;
	
	if (test_list->name != NULL) {
		test_list->next = malloc(sizeof(t_unit_test));
		test_list = test_list->next;
	}

	test_list->name = test_name;
	test_list->test_f = test_f;
	test_list->next = NULL;
}

void child(t_unit_test *t)
{
	int	test_res;

	test_res = t->test_f();
	if (test_res == 0)
		exit(0);
	exit(1);
}

int parent(char *f_name, char *t_name)
{
	int	status;
	int	ret;
	// TODO: get status - from exit code or signal

	ret = 0;
	wait(&status);
	printf("(dbg) status [%d]\n", status);
	printf("[%s]:[%s]:", f_name, t_name);
		if (status == 0)
		{
			printf("[%s]\n", "OK");
			ret = 1;
		}
		else
			printf("[%s]\n", "KO");
	return (ret);
}

int		launch_test(t_unit_test *test_list, char *test_func_name) {
	int res;
	int	test_cnt;
	int	succeed_test;
	pid_t	pid;

	res = 0;
	test_cnt = 0;
	succeed_test = 0;
	
	while(test_list != NULL)
	{
		pid = fork();
		// TODO: what it means?
		if (pid < 0)
			return (-1);
		else if (pid == 0)
			child(test_list);
		else if (pid > 0)
			succeed_test += parent(test_func_name, test_list->name);

		test_cnt++;
		// TODO: fork and check here exit status or signal
		//res = test_list->test_f();
			
		test_list = test_list->next;
	}

	if (test_cnt == succeed_test) 
		return (0);
	else
		return (-1);
}

