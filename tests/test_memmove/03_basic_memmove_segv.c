#include "libunit.h"
#include "rt_memmove.h"

extern void	*lu_memmove(void *dst, const void *src, unsigned int count);

int	basic_memmove_segv(void)
{
	char	*dst;
	char	*src;

	dst = NULL;
	src = NULL;
	lu_memmove(dst, src, 5);
	return (0);
}
