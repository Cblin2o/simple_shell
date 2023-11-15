#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *wow = getenv("HOME");

	printf("%s\n", wow);
	return (0);
}
