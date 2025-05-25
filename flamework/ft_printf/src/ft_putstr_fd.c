/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:27:05 by shattori          #+#    #+#             */
/*   Updated: 2025/01/23 20:16:57 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr_fd(char *s, t_tab *tab)
{
	int	len;

	if (!s)
	{
		if (ft_confirm_write("(null)", 6, tab) == FAILURE_WRITE)
			return (FAILURE_WRITE);
		return (6);
	}
	len = 0;
	while (*s)
	{
		if (ft_confirm_write(s++, 1, tab) == FAILURE_WRITE)
			return (FAILURE_WRITE);
		len++;
	}
	return (len);
}
