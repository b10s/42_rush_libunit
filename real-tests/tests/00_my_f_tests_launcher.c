/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_my_f_tests_launcher.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:00:56 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 23:41:17 by aenshin          ###   ########.fr       */
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
	load_test(t, "my_f_test_ok", &my_f_test_ok);
	res = launch_test(t, "my_f");
	return (res);
}
