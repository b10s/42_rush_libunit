/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_rt_putchar_launcher.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:16:43 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 23:24:19 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt_putchar.h"
#include "../../libunit/ft_printf/ft_printf.h"

int	rt_putchar_launcher(void)
{
	t_unit_test	*t;
	int			ret;

	t = malloc(sizeof(t_unit_test));
	load_test(t, "basic_test", &basic_test);
	load_test(t, "unprintable_char_test", &unprintable_char_test);
	ret = launch_test(t, "rt_putchar");
	return (ret);
}
