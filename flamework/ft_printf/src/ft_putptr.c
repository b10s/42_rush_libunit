/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:44:46 by shattori          #+#    #+#             */
/*   Updated: 2025/01/25 00:58:08 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putptr(void *ptr, t_tab *tab)
{
	unsigned long	address;
	const char		*hex_digits = "0123456789abcdef";
	char			buffer[19];
	int				i;

	if (!ptr)
		return (ft_putstr_fd("(nil)", tab), 5);
	address = (unsigned long)ptr;
	buffer[18] = '\0';
	i = 17;
	while (address)
	{
		buffer[i--] = hex_digits[address % 16];
		address /= 16;
	}
	buffer[i--] = 'x';
	buffer[i] = '0';
	if (ft_putstr_fd(&buffer[i], tab) == -1)
		return (FAILURE_WRITE);
	return (18 - i);
}
