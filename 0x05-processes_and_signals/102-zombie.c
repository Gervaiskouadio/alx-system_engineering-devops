#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * infinite_while - loop indefinitely
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
 * main - create 5 zombie processes
 *
 * Return: Always 0
 */
int main(void)
{
    pid_t child_pid;
    int i;

    for (i = 0; i < 5; i++)
    {
        child_pid = fork();
        if (child_pid > 0)
        {
            printf("Zombie process created, PID: %d\n", child_pid);
            sleep(1);
        }
        else
        {
            exit(0);
        }
    }

    infinite_while();

    return (0);
}
