#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>
#define _GNU_SOURCE

/**
 * infinite_while - creates an infinite while loop
 * with a delay of one second
 *
 * Return: Always 0
 */

int infinite_while(void)
{
	while (1)
	{
		sleep(1);
	}
	return (0);
}



/**
 * main - Entry point, generates 5 processes
 *
 * Return:Always 0
 */

int main(void)
{
	pid_t pid;
	char i = 1;

	while (i < 6)
	{
		pid = fork();
		if (pid > 0)
		{
			printf("Zombie process created, PID: %d\n", pid);
			sleep(1);
			i++;
		}
		else
			exit(0);
	}

	infinite_while();

	return (EXIT_SUCCESS);
}
