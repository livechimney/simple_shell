#include <stdio.h>
#include <stdlib.h>
int main(int ac __attribute__((unused)), char **av)
{
	int i = 0;
	printf("sorting %d", i);

	printf("argv content is argv[i]\n");

	while (*av != NULL)
	{
		printf("argv[%d} = %s\n", i, *av);
		av++;

	}

	return (0);
}
