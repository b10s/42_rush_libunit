#include "libunit.h"

int	ft_atoi(const char *str);

int	zero_test(void)
{
	if (ft_atoi("0") == 0)
		return (0);
	return (-1);
}
