#include "../../libunit/libunit.h"
#include "tests.h"
#include <stdlib.h>

int my_f_tests_launcher(void)
{
	t_unit_test	*t;
	int	res;

	t = malloc(sizeof(t_unit_test)); //TODO: err handling
	t->name = NULL;
	load_test(t, "my_f_test_ok", &my_f_test_ok);
	load_test(t, "my_f_test_ko", &my_f_test_ko);
	load_test(t, "my_f_test_sigsegv", &my_f_test_sigsegv);
	load_test(t, "my_f_test_sigbus", &my_f_test_sigbus);

	res = launch_test(t, "my_f");
	//TODO: do we need to free list or launch can free?
	return (res);
}
