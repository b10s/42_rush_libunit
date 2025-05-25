#include "libunit.h"

int	basic_memmove_ok(void);
int	basic_memmove_ko(void);
int	basic_memmove_segv(void);
int	basic_memmove_bus(void);

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
