#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main(){
	char command[100];
	printf ("MAX LENGTH 100 symbols\n");
	char* arg[10]={NULL};
	char* token;
	int i = 0;
	pid_t PID;
	while(1){
	printf("Enter command\n");
	scanf("%[^\n]%*c", &command);
	token = strtok(command, " \n");
	while (token!=NULL){
		arg[i]=token;
		token = strtok(NULL, " \n");
		i++;
	}
	PID = fork();
	if (PID==0) {
		execvp(arg[0], arg);
	} else wait(NULL);
	i=0;
	}
}
