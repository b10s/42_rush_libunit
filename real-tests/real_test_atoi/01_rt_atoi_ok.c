#include "libunit.h"

int	rt_atoi(const char *str);

int	basic_test_ok(void)
{
	if (rt_atoi("42") == 42)
		return (0);
	return (-1);
}
