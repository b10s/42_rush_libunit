/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rt_putchar.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkamolba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/26 18:34:33 by nkamolba          #+#    #+#             */
/*   Updated: 2025/05/25 23:11:59 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RT_PUTCHAR_H
# define RT_PUTCHAR_H

# include "../libunit/libunit.h"

void	rt_putchar(char c);
int		rt_putchar_launcher(void);
int		basic_test(void);
int		unprintable_char_test(void);

#endif
