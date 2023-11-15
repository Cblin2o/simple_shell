#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "this is seperated by spaces";
	char delim[5] = " ";
	char *trunks;
	
	printf("%p %p\n", str ,delim);
	trunks = strtok(str, delim);
	while (trunks != NULL)
	{
		printf("%s\n", trunks);
		trunks = strtok(NULL, delim);
	}
	return (0);
}
