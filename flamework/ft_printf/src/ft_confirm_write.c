/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_confirm_write.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 16:27:49 by shattori          #+#    #+#             */
/*   Updated: 2025/01/23 19:55:44 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_confirm_write(const void *buf, int count, t_tab *tab)
{
	int	ret;

	ret = write(1, buf, count);
	if (ret == FAILURE_WRITE)
	{
		tab->error_flag = 1;
		return (FAILURE_WRITE);
	}
	return (ret);
}
