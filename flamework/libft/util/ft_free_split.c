/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 05:44:16 by shattori          #+#    #+#             */
/*   Updated: 2025/04/28 01:08:45 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_str(char **ptr)
{
	int	len;

	len = 0;
	while (ptr[len])
		len++;
	return (len);
}

void	ft_free_split(char **ptr)
{
	int	i;
	int	size;

	if (!ptr)
		return ;
	i = 0;
	size = count_str(ptr);
	while (i < size)
	{
		if (ptr[i])
			free(ptr[i]);
		i++;
	}
	free(ptr);
}
