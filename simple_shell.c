#include "main.h"
/**
 * main - c program that acts like a shell
 * Return: Always 0
 */
int main(void)
{
	int i, l;
	char *keyword = { "ls", "cd", "-l", "la", "mkdir", "rm", "cd..", "rmdir", "vi", NULL };
	char *store;
	char *par1;
	char* const* par2[1000];

	store = malloc(1000);
	par1 = malloc(100);


	printf("$$");
	scanf(" %[^\n]", store);
	l = strlen(store);

	for (i = 0; i < 1; i++)
	{
		if (store[i] == keyword[i])
		{
			par1[i] == store[i];
			continue;
			par2[i] == store[i];

			execve("./par[i]", "par2", NULL);
		}
	}

	free(par1);
	free(store);

	return (0);

}
