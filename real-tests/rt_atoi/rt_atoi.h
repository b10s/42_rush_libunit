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

#ifndef RT_ATOI_H
# define RT_ATOI_H

# include "libunit.h"

int	rt_atoi(const char *str);
int	rt_atoi_launcher(void);
int	basic_atoi_test(void);
int	zero_test(void);
int	negative_test(void);
int	plus_sign_test(void);
int	space_test(void);
int	space_plus_test(void);
int	space_negative_test(void);
int	word_after_test(void);
int	zero_before_num_test(void);
int	zero_before_neg_num_test(void);
int	multiple_zero_test(void);

#endif
