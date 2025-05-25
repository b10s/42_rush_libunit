#include "libunit.h"

int	rt_atoi(const char *str);

int	zero_test(void)
{
	if (rt_atoi("0") == 0)
		return (0);
	return (-1);
}
