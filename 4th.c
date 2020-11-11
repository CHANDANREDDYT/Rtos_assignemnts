#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int ret_val;
	int vow,v,low_vow,up_vow;
	printf("parent process id of current process:%d\n",getppid());
	printf("the current parent process:%d\n",getpid());
	printf("creating child process\n");
	ret_val=fork();
	
	if(ret_val<0){
		printf("child process not creted\n");
		}
	else if(ret_val==0){
	printf("inside child process\n");
	printf("the child process id :%d\n",getpid());
	printf("the parent pid of child process %d id %d\n",getpid(),getppid());
	
	vow=argv[0];
	v=vow;
	
		if(v=='a'|| v=='e' || v=='i' || v=='o' || v=='u')
		{
		printf("%c is  vowel.",v);
		}
	
		else
		{
	
		printf("%c is not vowel.",v);
		printf("%c",sizeof(v));
		}
	
	}

	else
	{
	printf("parent process\n");
	}
	}