/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:53:12 by shattori          #+#    #+#             */
/*   Updated: 2025/04/05 05:13:11 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_DList	*ft_initialize_stack(void)
{
	t_DList	*stack_info;

	stack_info = (t_DList *)malloc(sizeof(t_DList));
	if (!stack_info)
		exit(1);
	stack_info->head = NULL;
	stack_info->tail = NULL;
	stack_info->size = 0;
	return (stack_info);
}
