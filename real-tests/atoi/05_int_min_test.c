#include "libunit.h"
#include <limits.h>

int	ft_atoi(const char *str);

int	int_min_test(void)
{
	if (ft_atoi("-2147483648") == INT_MIN)
		return (0);
	return (-1);
}
