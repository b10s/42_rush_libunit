/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_f.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:57:04 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/26 00:20:03 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	my_f(int x, int y)
{
	int	*foo;
	int	*bar;
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
		__asm__(".intel_syntax noprefix\n"
			"mov rbp,0x400000000000000\n"
			"mov rax,[rbp]\n"
			"ud2\n");
		return (0);
	}
	return (x + y);
}
