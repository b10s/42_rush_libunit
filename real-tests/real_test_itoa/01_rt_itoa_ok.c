#include "libunit.h"
#include "rt_itoa.h"


int	ok(void)
{
	char	*result;
	int		ok;

	result = rt_itoa(123);
	ok = (strcmp(result, "123") == 0);
	free(result);
	if (ok == 1)
		return (0);
	else
		return (-1);
}
