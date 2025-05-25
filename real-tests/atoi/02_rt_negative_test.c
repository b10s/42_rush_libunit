#include "libunit.h"

int	ft_atoi(const char *str);

int	negative_test(void)
{
	if (ft_atoi("-42") == -42)
		return (0);
	return (-1);
}
