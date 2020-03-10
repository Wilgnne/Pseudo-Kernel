#include <stdio.h>
#include <kernel/kstdio.h>

void main()
{
	char command[100];
	char args[50];
	while (1)
	{
		printf("$ ");
		scanf("%s", command);
		scanf("%[^\n]", args);
		flush_in();

		printf("\t\tRUN %s with %s args\n", command, args);
	}
}