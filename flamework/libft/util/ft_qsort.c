/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_qsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:50:53 by shattori          #+#    #+#             */
/*   Updated: 2025/04/05 04:52:54 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

// base is the pointer to the array to be sorted
// num is the number of elements in the array
// size is the size of each element in the array
// cmp is the comparison function that takes two
// pointers to elements and returns an integer
// void ft_qsort(void *base, size_t num, size_t size, int (*cmp)(const void *,
//		const void *))

size_t	partition(void *base, size_t num, size_t size, int (*cmp)(const void *,
			const void *))
{
	char	*arr;
	void	*pivot;
	size_t	i;
	size_t	j;

	j = 0;
	arr = (char *)base;
	pivot = arr + (num - 1) * size;
	i = 0;
	while (j < num - 1)
	{
		if (cmp(arr + j * size, pivot) < 0)
		{
			ft_swap(arr + i * size, arr + j * size, size);
			i++;
		}
		j++;
	}
	ft_swap(arr + i * size, pivot, size);
	return (i);
}

void	ft_qsort(void *base, size_t num, size_t size, int (*cmp)(const void *,
			const void *))
{
	size_t	pivot_index;

	if (num < 2)
		return ;
	pivot_index = partition(base, num, size, cmp);
	ft_qsort(base, pivot_index, size, cmp);
	ft_qsort((char *)base + (pivot_index + 1) * size, num - pivot_index - 1,
		size, cmp);
}

// int  main()
// {
//     int data[] ={ 5, 2, 9, 1, 5, 6 };
//     int i;

//     ft_qsort(data, sizeof(data) / sizeof(data[0]), sizeof(int),
//	ft_compare_int);
//     for(int i = 0;i < sizeof(data) / sizeof(data[0]); i++)
//     printf("%3d",data[i]);
//     printf("\n");
//     return (0);
// }