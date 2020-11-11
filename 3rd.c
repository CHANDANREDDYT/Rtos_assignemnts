#include<unistd.h>
#include<stdlib.h>
#include <fcntl.h>
#include<errno.h>
#include<sys/wait.h>
int main(int argc,char*argv[]){

    int ret_value;int r;
    //getpid() and getppid()
    printf("Parent process id of the current process: %d\n",getppid());
    printf("The current parent process: %d\n",getpid());
    printf("Creating a Child process\n");
    ret_value = fork();
	if(ret_value < 0){
        printf("Child process not created\n");
    }

	else if(ret_value == 0){
         printf("Inside Child process");     
        printf("The child process id chpid: %d\n",getpid());
        printf("The parent pid of child process %d is %d\n",getpid(),getppid());
        r=system("ls");
	b=system("ps -al");
        return r;
	}   
        sleep(20);    //put child process 20 ms
	
	else
	{
	printf("parent process");
	}
}
