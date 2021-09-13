#include <stdio.h>
#include <stdlib.h>

int main(){
	char command[50];
	printf ("MAX LENGTH 50\n");
	while (1){
		printf("Enter command\n");
		scanf ("%s", &command);
		system(command);
	}
	return 0;
}
