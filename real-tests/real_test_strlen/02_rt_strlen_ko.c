/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_rt_strlen_ko.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:47:22 by shattori          #+#    #+#             */
/*   Updated: 2025/05/25 20:33:47 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ft_strlen(const char *str);

int	basic_strlen_test_ko(void)
{
	char	s1[10] = "hello";
	char	*s2;

	s2 = "world";
	if (ft_strlen(s1) == 10 && ft_strlen(s2) == 10)
		return (0);
	else
		return (-1);
}
