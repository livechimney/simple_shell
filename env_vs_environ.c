#include <stdio.h>
#include <unistd.h>

extern char **environ;

int main(int ac __attribute__((unused)), char **env)
{
	printf("%p\n %p\n", (void *)environ, (void *)env);
	return (0);
}
