#include "libunit.h"

int	basic_strlen_test_ko(void)
{
	char	s1[10] = "";

	if (rt_strlen(s1) == 0)
		return (0);
	else
		return (-1);
}
