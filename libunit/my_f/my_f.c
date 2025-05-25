#include <stdio.h>

int my_f(int x, int y)
{
	//libunit/my_f/my_f.cprintf("my_f is called\n");

	// KO
	if (x == 4)
		return (0);

	// TODO: SIGSEGV
	if (x == 44)
		return (0);

	// TODO: SIGBUS
	if (x == 444)
		return (0);
		
	return x + y;
}

