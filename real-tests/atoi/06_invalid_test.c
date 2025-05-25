#include "libunit.h"

int	ft_atoi(const char *str);

int	invalid_test(void)
{
	if (ft_atoi("abc") == 0)
		return (0);
	return (-1);
}
