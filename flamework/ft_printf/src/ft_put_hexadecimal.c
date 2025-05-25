/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hexadecimal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shattori <shattori@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 20:45:00 by shattori          #+#    #+#             */
/*   Updated: 2025/01/23 19:54:19 by shattori         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	hex_length(unsigned int variable)
{
	int	len;

	if (variable == 0)
		return (1);
	len = 0;
	while (variable)
	{
		len++;
		variable /= 16;
	}
	return (len);
}

void	ft_recursive_hex(unsigned int variable, char *result, int index,
		const char *hex_digits)
{
	if (variable >= 16)
		ft_recursive_hex(variable / 16, result, index - 1, hex_digits);
	result[index] = hex_digits[variable % 16];
}

char	*ft_decimal_to_hexadecimal(unsigned int variable, int uppercase)
{
	const char	*hex_digits;
	int			len;
	char		*result;

	if (uppercase)
		hex_digits = "0123456789ABCDEF";
	else
		hex_digits = "0123456789abcdef";
	len = hex_length(variable);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (variable == 0)
		result[0] = '0';
	else
		ft_recursive_hex(variable, result, len - 1, hex_digits);
	return (result);
}

int	ft_put_hexadecimal(unsigned int value, int uppercase, t_tab *tab)
{
	char	*hex_str;
	int		len;

	hex_str = ft_decimal_to_hexadecimal(value, uppercase);
	if (!hex_str)
		return (FAILURE_MALLOC);
	len = ft_putstr_fd(hex_str, tab);
	free(hex_str);
	return (len);
}

// int	main(void)
// {
// 	char	*hex_result;

// 	// Test case 1
// 	hex_result = ft_decimal_to_hexadecimal(255, 1);
// 	if (hex_result)
// 	{
// 		printf("Hexadecimal: %s\n", hex_result);
// 		free(hex_result); // Free the allocated memory
// 	}
// 	// Test case 2
// 	hex_result = ft_decimal_to_hexadecimal(0, 0);
// 	if (hex_result)
// 	{
// 		printf("Hexadecimal: %s\n", hex_result);
// 		free(hex_result); // Free the allocated memory
// 	}
// 	// Test case 3
// 	hex_result = ft_decimal_to_hexadecimal(4294967295U, 0);
// 	if (hex_result)
// 	{
// 		printf("Hexadecimal: %s\n", hex_result);
// 		free(hex_result); // Free the allocated memory
// 	}
// 	return (0);
// }
