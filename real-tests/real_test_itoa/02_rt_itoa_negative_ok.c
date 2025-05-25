#include "libunit.h"
#include "rt_itoa.h"

int	zero_ok(void)
{
	char	*result;
	int		ok;

	result = lu_itoa(0);
	ok = (strcmp(result, "0") == 0);
	free(result);
	return (ok ? 0 : -1);
}
