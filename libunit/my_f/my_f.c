#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int my_f(int x, int y)
{
	int	*foo;
	int	*bar;
	int	z;

	z = 42;
	foo = (int *)0;
	bar = (int *)1;

	//libunit/my_f/my_f.cprintf("my_f is called\n");

	// KO
	if (x == 4)
		return (0);

	// TODO: SIGSEGV
	if (x == 44)
	{
		*foo = 'S';
		return (0);
	}

	// TODO: SIGBUS
	if (x == 444)
	{
		//char *s = (char *)1;
		//*s = 'a';

		//*foo = 'S';
		//char array[10];
		//return array[atol("34544")];

		//*bar = 42;
		int *xxx;

		xxx = (int *)404;
		*xxx = 123;

		//char *s2;
		//s1 = "AI";
		//s2 = "HELLO";
		//s1[1] = s2[1];
		//s1[2] = s2[2];
		//s1[3] = s2[3];
		return (0);
		//strcpy(s1, s2);

		//char *aligned_memory = malloc(sizeof(int) + 1);
		//char *misaligned_memory = aligned_memory + 1;
		//int *misaligned_int_ptr = (int *)misaligned_memory;
		//*misaligned_int_ptr = 42; // Triggers SIGBUS
	}
		//*(bar + 1) = 'B';
		
	return x + y;
}

