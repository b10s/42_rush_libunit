#include "libunit.h"

int	rt_atoi(const char *str);

int	invalid_test(void)
{
	if (rt_atoi("abc") == 0)
		return (0);
	return (-1);
}
