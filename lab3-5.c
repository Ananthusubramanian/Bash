#include <stdio.h>
#include <sys/types.h>

void main()
{
	pid_t pid1, pid2;

	pid1 = fork();

	if(pid1 == 0)
	{
        execvp("./square",NULL);
	}

	else
	{
		wait(NULL);
		pid2 = fork();

		if (pid2 == 0)
		{
        	execvp("./circle",NULL);
		}
		else
		{
			wait(NULL);
		}
	}
}
