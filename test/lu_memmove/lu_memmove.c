#include "libft.h"

void	*lu_memmove(void *dst, const void *src, unsigned int count)
{
	char	*dptr;
	char	*sptr;

	if (dst > src)
	{
		dptr = (char *)dst + count - 1;
		sptr = (char *)src + count - 1;
		while (count--)
			*dptr-- = *sptr--;
	}
	else
	{
		dptr = (char *)dst;
		sptr = (char *)src;
		while (count--)
			*dptr++ = *sptr++;
	}
	return (dst);
}
