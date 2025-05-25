/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_rt_strlen_buse.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 03:47:27 by shattori          #+#    #+#             */
/*   Updated: 2025/05/25 17:03:20 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

int	ft_strlen(const char *str);

int	basic_strlen_test_buse(void)
{
	char	*s;

	s = (char *)1;
	ft_strlen(s);
	return (-1);
}
