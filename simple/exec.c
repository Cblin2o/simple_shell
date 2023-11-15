#include <stdio.h>
#include <unistd.h>

/**
 * main - execve example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/usr/bin/ls", NULL};
    char *exe[] = {NULL};

    printf("Before execve\n");
    if (execve(argv[0], argv, exe) == -1)
    {
        perror("Error:");
    }
    printf("After execve\n");
    return (0);
}
