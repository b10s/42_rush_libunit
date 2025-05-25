/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 17:25:10 by jdaufin           #+#    #+#             */
/*   Updated: 2025/05/25 19:29:20 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "101_basic_tests.h"

int	basic_launcher(void)
{
	t_unit_test	*lst;
	int			ret;

	lst = NULL;
	load_test(&lst, "basic_strcpy_test_ok", &test_ok);
	load_test(&lst, "basic_strcpy_test_ko", &test_ko);
	load_test(&lst, "basic_strcpy_test_segv", &test_segv);
	load_test(&lst, "basic_strcpy_test_buse", &test_buse);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
