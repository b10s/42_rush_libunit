#include "./libunit.h"
#include <stdlib.h>
#include <stdio.h>

void	load_test(t_unit_test *test_list, char *test_name, int (*test_f)(void))
{
	printf("loading test..\n");
	while(test_list->next != NULL)
		test_list = test_list->next;
	
	if (test_list->name != NULL) {
		test_list->next = malloc(sizeof(t_unit_test));
		test_list = test_list->next;
	}

	test_list->name = test_name;
	test_list->test_f = test_f;
	test_list->next = NULL;
}

int		launch_test(t_unit_test *test_list) {
	int res;

	res = 0;
	while(test_list != NULL)
	{
		printf("launching [%s]\n", test_list->name);
		test_list->test_f();
		test_list = test_list->next;
	}
	return (res);
}

