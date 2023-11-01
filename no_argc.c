#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	int i;

	printf("argv content is argv[]\n");

	while (*av != NULL)
	{
		printf("argv[%d} = %s\n", i, *av);
		av++;

	}

	return (0);
}
