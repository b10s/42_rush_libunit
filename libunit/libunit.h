/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aenshin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 22:27:05 by aenshin           #+#    #+#             */
/*   Updated: 2025/05/25 22:30:02 by aenshin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

typedef struct s_unit_test
{
	char				*name;
	int					(*test_f)(void);
	struct s_unit_test	*next;
}	t_unit_test;

void	load_test(t_unit_test *test_list, char *test_name, int (*test_f)(void));
int		launch_test(t_unit_test *test_list, char *test_func_name);
#endif
