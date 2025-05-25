#include "../my_f.h"

int my_f_test_ok(void)
{
	if (my_f(40, 2) == 42)
		return (0);
	else
		return (-1);
}
