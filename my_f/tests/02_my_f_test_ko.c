#include "../my_f.h"

int my_f_test_ko(void)
{
	if (my_f(4, 38) == 42)
		return (0);
	else
		return (-1);
}
