/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 20:19:46 by shattori          #+#    #+#             */
/*   Updated: 2025/01/23 21:06:27 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#define UPPER 1

int	initialize_tab(t_tab *tab, const char *fmt)
{
	if (!fmt)
		return (-1);
	tab->len_str = 0;
	tab->total_len = 0;
	tab->error_flag = 0;
	return (0);
}

int	handle_format(t_tab *tab, const char *specifier)
{
	if (*specifier == 'd' || *specifier == 'i')
		return (ft_putnbr_fd(va_arg(tab->ap, int), tab));
	else if (*specifier == 'c')
		return (ft_putchar_fd((char)va_arg(tab->ap, int), tab));
	else if (*specifier == 's')
		return (ft_putstr_fd(va_arg(tab->ap, char *), tab));
	else if (*specifier == 'p')
		return (ft_putptr(va_arg(tab->ap, void *), tab));
	else if (*specifier == 'u')
		return (ft_put_unsigned(va_arg(tab->ap, unsigned int), tab));
	else if (*specifier == 'x')
		return (ft_put_hexadecimal(va_arg(tab->ap, unsigned int), !UPPER, tab));
	else if (*specifier == 'X')
		return (ft_put_hexadecimal(va_arg(tab->ap, unsigned int), UPPER, tab));
	else if (*specifier == '%')
		return (ft_putchar_fd('%', tab));
	else
		return (0);
}

int	ft_printf(const char *fmt, ...)
{
	t_tab	tab;

	if (initialize_tab(&tab, fmt) == -1)
		return (0);
	va_start(tab.ap, fmt);
	while (fmt[tab.len_str])
	{
		if (fmt[tab.len_str] == '%' && fmt[tab.len_str + 1] != '\0')
		{
			tab.total_len += handle_format(&tab, &fmt[tab.len_str + 1]);
			tab.len_str += 2;
		}
		else
		{
			tab.total_len += ft_putchar_fd(fmt[tab.len_str], &tab);
			tab.len_str++;
		}
		if (tab.error_flag)
			break ;
	}
	va_end(tab.ap);
	if (tab.error_flag)
		return (FAILURE_WRITE);
	else
		return (tab.total_len);
}
