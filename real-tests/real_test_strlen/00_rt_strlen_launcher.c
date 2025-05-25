/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_rt_strlen_launcher.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:07:30 by shattori          #+#    #+#             */
/*   Updated: 2025/05/25 17:02:07 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_strlen.h"

int	basic_strlen_launcher(void)
{
	t_unit_test	*lst;
	int			ret;

	lst = NULL;
	load_test(&lst, "basic_strcpy_test_ok", &basic_strlen_test_ok);
	load_test(&lst, "basic_strcpy_test_ko", &basic_strlen_test_ko);
	load_test(&lst, "basic_strcpy_test_segv", &basic_strlen_test_segv);
	load_test(&lst, "basic_strcpy_test_buse", &basic_strlen_test_buse);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
