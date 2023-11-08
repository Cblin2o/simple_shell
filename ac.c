#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	while (*av != NULL)
	{
		printf("%s\n", *av);
		av++;
	}

}
