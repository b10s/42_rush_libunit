/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   101_basic_tests.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 16:49:49 by jdaufin           #+#    #+#             */
/*   Updated: 2025/05/25 20:01:09 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASIC_STRCPY_TESTS_H
# define BASIC_STRCPY_TESTS_H
# include "libft.h"
# include "libunit.h"
# include <string.h>

int	basic_launcher(void);
int	test_ok(void);
int	test_ko(void);
int	test_segv(void);
int	test_buse(void);
int	my_f(int x, int y);

#endif
