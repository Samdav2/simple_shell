#include "main.h"
/**
 * main - C program that acts like c
 * Return: 0
 */
int main(void)
{
	char *input = NULL;
	size_t char_read;
	size_t in_size = 0;
	pid_t mypid;
	char *args[] = {input, NULL};

	while (1)
	{
		printf("$$ ");
		char_read = getline(&input, &in_size, stdin);

		if (char_read == -1)
		{
			if (feof(stdin))
			{
				printf("\n");
				break;
			}
			else
			{
				perror("getline failed!");
				exit(EXIT_FAILURE);
			}
		}

		input[strcspn(input, "\n")] = '\0';

		mypid = fork();

		if (mypid == -1)
		{
			perror("Fork failed!");
			exit(EXIT_FAILURE);
		}
		else if (mypid == 0)
		{
			if (execve(input, args, NULL) == -1)
			{
				perror("execve failed!");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			wait(NULL);
		}
	}

	free(input);

	return (0);
}
