#include "libunit.h"
#include "rt_itoa.h"

int zero_ok(void)
{
	char *result = lu_itoa(0);
	int ok = (ft_strcmp(result, "0") == 0);
	free(result);
	return (ok ? 0 : -1);
}
