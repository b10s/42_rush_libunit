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

int		launch_test(t_unit_test *test_list, char *test_func_name) {
	int res;
	int	test_cnt;
	int	succeed_test;

	res = 0;
	test_cnt = 0;
	succeed_test = 0;
	
	while(test_list != NULL)
	{
		printf("[%s]:[%s]:", test_func_name, test_list->name);
		test_cnt++;
		// TODO: fork and check here exit status or signal
		res = test_list->test_f();
		if (res == 0)
		{
			printf("[%s]\n", "OK");
			succeed_test++;
		}
		else
			printf("[%s]\n", "KO");
			
			
		test_list = test_list->next;
	}

	if (test_cnt == succeed_test) 
		return (0);
	else
		return (-1);
}

