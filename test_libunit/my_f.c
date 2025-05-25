/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_f.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:57:04 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 22:58:01 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	my_f(int x, int y)
{
	int	*foo;
	int	*bar;
	int	*xxx;
	int	z;

	z = 42;
	foo = (int *)0;
	bar = (int *)1;
	if (x == 4)
		return (0);
	if (x == 44)
	{
		*foo = 'S';
		return (0);
	}
	if (x == 444)
	{
		xxx = (int *)404;
		*xxx = 123;
		return (0);
	}
	return (x + y);
}
