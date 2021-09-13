#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void forking(){
	int n = 5;
	if (fork()==0)
		printf("Hello from child %d\n", getpid()-n);
	else if (fork()==-1)
		printf("Error");
	else {
	printf ("Hello from parent %d\n", getpid()-n);
	wait(NULL);
	}
}

int main(){
	forking();
return EXIT_SUCCESS;
}
