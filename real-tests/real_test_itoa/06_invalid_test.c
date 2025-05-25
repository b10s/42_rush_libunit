#include "rt_itoa.h"
#include <limits.h>

int	itoa_invalid(void)
{
	char	*result;
	int		ok;

	result = rt_itoa("abc");
	ok = (ft_strcmp(result, "2147483647") == 0);
	free(result);
	if (ok == 1)
		return (0);
	else
		return (-1);
}
