#include "rt_itoa.h"
#include <limits.h>

int	itoa_int_min_ok(void)
{
	char	*result;
	int		ok;

	result = rt_itoa(INT_MIN);
	ok = (ft_strcmp(result, "-2147483648") == 0);
	free(result);
	if (ok == 1)
		return (0);
	else
		return (-1);
}
