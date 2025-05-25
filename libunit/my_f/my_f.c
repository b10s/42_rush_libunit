#include <stdio.h>

int my_f(int x, int y)
{
	//printf("my_f is called\n");

	// KO
	if (x == 4)
		return (0);

	// TODO: SIGSEGV
	if (x == 44)
		return (0);

	// TODO: SIGSEGV
	if (x == 444)
		return (0);
		
	return x + y;
}

