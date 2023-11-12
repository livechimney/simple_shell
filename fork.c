#include <stdio.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;

	printf("Before fork I was one\n");

	fork();

	if (pid == -1)
	{
		perror("unsucessful\n");
		return (1);

	}
	printf("After fork I become two\n");
	return 0;


}
