/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic_strlen_segv.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:47:24 by shattori          #+#    #+#             */
/*   Updated: 2025/05/24 06:43:18 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ft_strlen(const char *str);

int	basic_strlen_test_segv(void)
{
	char	*s1;

	s1 = NULL;
	if (ft_strlen(s1))
		return (0);
	else
		return (-1);
}
