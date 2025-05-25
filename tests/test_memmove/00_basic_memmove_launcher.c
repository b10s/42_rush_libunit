#include "libunit.h"
#include "rt_memmove.h"

int	basic_memmove_launcher(void)
{
	t_unit_test	*testlist;

	testlist = NULL;
	load_test(&testlist, "Basic OK", &basic_memmove_ok);
	load_test(&testlist, "Basic KO", &basic_memmove_ko);
	load_test(&testlist, "SEGV", &basic_memmove_segv);
	load_test(&testlist, "BUS", &basic_memmove_bus);
	return (launch_tests(&testlist));
}
