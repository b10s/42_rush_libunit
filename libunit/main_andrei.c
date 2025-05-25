#include <stdio.h>

#include "./libunit.h"

#include "./my_f/tests/tests.h"

int main() {
	printf("main: launching tests for my_f()\n");
	my_f_tests_launcher();
	return 0;
}
