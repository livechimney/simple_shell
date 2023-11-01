#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 0;
	char *buf = NULL;


	printf("$");
	getline(&buf, &n, stdin);
	printf(" %s", buf);
	printf("%ld\n ", n);

	free (buf);

	return (0);
}
