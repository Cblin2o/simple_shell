#include <stdio.h>
#include <unistd.h>

/**
 * main - ppid
 *
 * Return: 0
 */

int main(void)
{
	pid_t my_pid;

	my_pid = getppid();
	printf("%u\n", my_pid);

	return (0);
}	
