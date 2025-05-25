#include "libunit.h"
#include <string.h>

extern void	*lu_memmove(void *dst, const void *src, unsigned int count);

int	basic_memmove_ok(void)
{
	char	src[] = "42Tokyo";
	char	dst[20];

	lu_memmove(dst, src, 7);
	if (memcmp(dst, src, 7) == 0)
		return (0);
	return (-1);
}
