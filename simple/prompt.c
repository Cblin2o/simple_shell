#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	size_t n = 0;
	char *len = NULL;

	len = malloc(sizeof(char) * 10);
	printf("root@757b220807: ");
	getline(&len, &n, stdin);
	printf("%s", len);

	free(len);

	return (0);
}
