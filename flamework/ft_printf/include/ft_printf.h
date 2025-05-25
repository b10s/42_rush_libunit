/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 21:35:47 by shattori          #+#    #+#             */
/*   Updated: 2025/01/23 19:54:40 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <limits.h>
# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

# define FAILURE_WRITE -1
# define FAILURE_MALLOC -1

typedef struct s_tab
{
	va_list	ap;
	int		len_str;
	int		total_len;
	int		error_flag;
	int		upper_case;
}			t_tab;

int			ft_printf(const char *str, ...);
int			ft_put_unsigned(unsigned int n, t_tab *tab);
char		*ft_decimal_to_hexadecimal(unsigned int variable, int uppercase);
int			ft_putchar_fd(char c, t_tab *tab);
int			ft_putnbr_fd(int n, t_tab *tab);
int			ft_putptr(void *ptr, t_tab *tab);
int			ft_putstr_fd(char *s, t_tab *tab);
int			ft_confirm_write(const void *buf, int count, t_tab *tab);
void		ft_recursive_hex(unsigned int variable, char *result, int index,
				const char *hex_digits);
int			ft_put_hexadecimal(unsigned int value, int uppercase, t_tab *tab);
size_t		ft_strlen(const char *in);

#endif // FT_PRINTF_H