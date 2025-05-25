#include "libunit.h"
#include <limits.h>

int	ft_atoi(const char *str);

int	int_max_test(void)
{
	if (ft_atoi("2147483647") == INT_MAX)
		return (0);
	return (-1);
}
