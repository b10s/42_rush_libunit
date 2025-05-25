#include "libunit.h"
#include "lu_atoi.h"

int	basic_atoi_launcher(void)
{
	t_unit_test	*lst;

	lst = NULL;
	load_test(&lst, "01_basic_test_ok", &basic_test_ok);
	load_test(&lst, "02_negative_test", &negative_test);
	load_test(&lst, "03_zero_test", &zero_test);
	load_test(&lst, "04_int_max_test", &int_max_test);
	load_test(&lst, "05_int_min_test", &int_min_test);
	load_test(&lst, "06_invalid_test", &invalid_test);
	return (launch_tests(&lst, "FT_ATOI"));
}
