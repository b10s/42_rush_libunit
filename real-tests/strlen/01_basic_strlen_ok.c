/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_strlen_ok.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:47:19 by shattori          #+#    #+#             */
/*   Updated: 2025/05/24 06:37:59 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ft_strlen(const char *str);

int	basic_strlen_test_ok(void)
{
	char	s1[10] = "hello";
	char	*s2;

	s2 = "world";
	if (ft_strlen(s1) == 5 && ft_strlen(s2) == 5)
		return (0);
	else
		return (-1);
}
