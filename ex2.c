#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
	sleep(5);
	int n = 3;
	for (int i = 0; i < n; i++){
		fork();
//		sleep(5);
	}
	return 0;
}
