/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_my_f_tests_launcher.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:00:56 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 23:49:55 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libunit/libunit.h"
#include "tests.h"
#include <stdlib.h>

int	my_f_tests_launcher(void)
{
	t_unit_test	*t;
	int			res;

	t = malloc(sizeof(t_unit_test));
	t->name = NULL;
	load_test(t, "my_f_test_ok_1", &my_f_test_ok_1);
	load_test(t, "my_f_test_ok_2", &my_f_test_ok_2);
	load_test(t, "my_f_test_ok_3", &my_f_test_ok_3);
	load_test(t, "my_f_test_ok_4", &my_f_test_ok_4);
	load_test(t, "my_f_test_ok_5", &my_f_test_ok_5);
	load_test(t, "my_f_test_ok_6", &my_f_test_ok_6);
	load_test(t, "my_f_test_ok_7", &my_f_test_ok_7);
	load_test(t, "my_f_test_ok_8", &my_f_test_ok_8);
	load_test(t, "my_f_test_ok_9", &my_f_test_ok_9);
	load_test(t, "my_f_test_ok_10", &my_f_test_ok_10);
	load_test(t, "my_f_test_ok_11", &my_f_test_ok_11);
	load_test(t, "my_f_test_ok_12", &my_f_test_ok_12);
	load_test(t, "my_f_test_ok_13", &my_f_test_ok_13);
	load_test(t, "my_f_test_ok_14", &my_f_test_ok_14);
	load_test(t, "my_f_test_ok_15", &my_f_test_ok_15);
	res = launch_test(t, "my_f");
	return (res);
}
