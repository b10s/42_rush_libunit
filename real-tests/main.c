/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_putchar.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 23:16:43 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 23:16:45 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"
#include "rt_putchar.h"
#include "rt_putstr.h"
#include "rt_atoi.h"

int	main(void)
{
	rt_putchar_launcher();
	rt_putstr_launcher();
	rt_atoi_launcher();
	return (0);
}
