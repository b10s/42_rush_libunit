#include "rt_memmove.h"

extern void	*test_memmove(void *dst, const void *src, unsigned int count);

int	basic_memmove_ko(void)
{
	char	src[] = "abc";
	char	dst[10];

	test_memmove(dst, src, 3);
	if (ft_memcmp(dst, "zzz", 3) == 0)
		return (0);
	return (-1);
}
