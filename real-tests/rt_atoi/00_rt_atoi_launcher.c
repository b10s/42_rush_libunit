/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_putchar.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:16:43 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 23:16:45 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_atoi.h"

int	rt_atoi_launcher(void)
{
	t_unit_test	*lst;
	int			ret;

	ft_printf("rt_atoi:\n");
	lst = NULL;
	load_test(&lst, "basic_atoi_test", &basic_atoi_test);
	load_test(&lst, "zero_test", &zero_test);
	load_test(&lst, "negative_test", &negative_test);
	load_test(&lst, "plus_sign_test", &plus_sign_test);
	load_test(&lst, "space_test", &space_test);
	load_test(&lst, "space_plus_test", &space_plus_test);
	load_test(&lst, "space_negative_test", &space_negative_test);
	load_test(&lst, "word_after_test", &word_after_test);
	load_test(&lst, "zero_before_num_test", &zero_before_num_test);
	load_test(&lst, "zero_before_neg_num_test", &zero_before_neg_num_test);
	load_test(&lst, "multiple_zero_test", &multiple_zero_test);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
