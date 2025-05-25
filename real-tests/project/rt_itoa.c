/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 13:57:58 by shattori          #+#    #+#             */
/*   Updated: 2025/05/25 20:36:36 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const int	len_digit(int n)
{
	int	len;

	if (n == 0)
		return (1);
	len = 0;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*rt_itoa(int n)
{
	int		len_buff;
	int		is_neg;
	char	*buff;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	is_neg = (n < 0);
	if (is_neg)
		n = -n;
	len_buff = len_digit(n) + is_neg;
	buff = malloc((len_buff + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	buff[len_buff] = '\0';
	while (len_buff--)
	{
		buff[len_buff] = ((n % 10) + '0');
		n /= 10;
	}
	if (is_neg)
		buff[0] = '-';
	return (buff);
}
