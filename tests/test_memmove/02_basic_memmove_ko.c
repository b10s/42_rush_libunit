#include "libunit.h"
#include "rt_memmove.h"

extern void	*lu_memmove(void *dst, const void *src, unsigned int count);

int	basic_memmove_ko(void)
{
	char	src[] = "abc";
	char	dst[10];

	lu_memmove(dst, src, 3);
	if (memcmp(dst, "zzz", 3) == 0)
		return (0);
	return (-1);
}
