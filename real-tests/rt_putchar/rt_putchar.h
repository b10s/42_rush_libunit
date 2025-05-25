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

#ifndef RT_PUTCHAR_H
# define RT_PUTCHAR_H

# include "../../libunit/libunit.h"

void	rt_putchar(char c);
int		rt_putchar_launcher(void);
int		basic_test(void);
int		unprintable_char_test(void);

#endif
