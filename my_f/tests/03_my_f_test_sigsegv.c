#include "../my_f.h"

int my_f_test_sigsegv(void)
{
	if (my_f(44, -2) == 42)
		return (0);
	else
		return (-1);
}

