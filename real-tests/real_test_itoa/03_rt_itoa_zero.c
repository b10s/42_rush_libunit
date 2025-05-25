#include "libunit.h"
#include "rt_itoa.h"

int	zero_ok(void)
{
	char	*result;
	int		ok;

	result = rt_itoa(0);
	ok = (ft_strcmp(result, "0") == 0);
	free(result);
	if (ok == 1)
		return (0);
	else
		return (-1);
}
