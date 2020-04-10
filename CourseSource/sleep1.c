#include <stdio.h>
#include <signal.h>

void wakeup(int);

void main()
{
	printf("About 4 seconds!\n");
	signal(SIGALRM,wakeup);
	alarm(4);
	pause();
	printf("Hello,World!\n");
}

void wakeup(int signum)
{
#ifndef SHHHH
	printf("Alarm received from kernel\n");
#endif
}
