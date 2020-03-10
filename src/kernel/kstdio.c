#include <stdio.h>

#include <kernel/kstdio.h>

//Limpa o buffer do teclado
void flush_in()
{
	int ch;
	while ((ch = fgetc(stdin)) != EOF && ch != '\n')
	{
	}
}