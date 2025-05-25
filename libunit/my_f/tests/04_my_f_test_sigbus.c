#include "../my_f.h"

int my_f_test_sigbus(void)
{
	if (my_f(444, 1) == 445)
		return (0);
	else
		return (-1);
}

