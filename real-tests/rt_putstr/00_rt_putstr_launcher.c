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

#include "rt_putstr.h"

int	rt_putstr_launcher(void)
{
	t_unit_test	*lst;
	int			ret;

	ft_printf("rt_putstr:\n");
	lst = NULL;
	load_test(&lst, "basic_putstr_test", &basic_putstr_test);
	load_test(&lst, "null_test", &null_test);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
