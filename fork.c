#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - c program that fork a program
 * Return: Always 0
 */
int main(void)
{
	pid_t mypid;

	fork();
	fork();
	fork();
	mypid = getpid();

	printf("This is my pid %d\n\n", mypid);

	return (0);
}
