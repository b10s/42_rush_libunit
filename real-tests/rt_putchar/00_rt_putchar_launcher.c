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

#include "rt_putchar.h"
#include "../../libunit/ft_printf/ft_printf.h"

int	rt_putchar_launcher(void)
{
	t_unit_test	*lst;
	int			ret;

	ft_printf("rt_putchar:\n");
	lst = NULL;
	load_test(&lst, "basic_test", &basic_test);
	load_test(&lst, "unprintable_char_test", &unprintable_char_test);
	ret = launch_tests(&lst);
	clean_list(&lst);
	return (ret);
}
