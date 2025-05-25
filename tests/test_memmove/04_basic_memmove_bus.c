#include "libunit.h"
#include "rt_memmove.h"

extern void	*test_memmove(void *dst, const void *src, unsigned int count);

int	basic_memmove_bus(void)
{
	int	*p;
	int	v;

	p = (int *)0x123;
	v = 42;
	test_memmove(p, &v, sizeof(int));
	return (0);
}
