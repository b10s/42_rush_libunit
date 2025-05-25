/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:35:48 by shattori          #+#    #+#             */
/*   Updated: 2025/01/23 18:29:40 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	ft_write_char(const char *c, t_tab *tab)
{
	if (ft_confirm_write(c, 1, tab) == -1)
		return (-1);
	return (1);
}

int	ft_putnbr_fd(int n, t_tab *tab)
{
	char	c;
	int		len;

	len = 0;
	if (n == -2147483648)
	{
		if (ft_putstr_fd("-2147483648", tab) == -1)
			return (-1);
		return (11);
	}
	if (n < 0)
	{
		if (ft_write_char("-", tab) == -1)
			return (-1);
		n = -n;
		len++;
	}
	if (n >= 10)
		len += ft_putnbr_fd(n / 10, tab);
	c = n % 10 + '0';
	if (ft_write_char(&c, tab) == -1)
		return (-1);
	return (len + 1);
}
