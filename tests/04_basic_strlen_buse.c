/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_basic_strlen_buse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:47:27 by shattori          #+#    #+#             */
/*   Updated: 2025/05/24 06:18:03 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

t_unit_test	*new_test(char *name, int (*test)(void))
{
	t_unit_test	*list;

	if (!(list = (t_unit_test *)malloc(sizeof(t_unit_test))))
		return (NULL);
	list->name = name;
	list->test = test;
	list->next = NULL;
	return (list);
}

void	load_test(t_unit_test **testlist, char *name, int (*test)(void))
{
	t_unit_test *tmp;

	if (*testlist == NULL)
		*testlist = new_test(name, test);
	else
	{
		tmp = *testlist;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_test(name, test);
	}
}