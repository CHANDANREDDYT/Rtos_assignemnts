#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	int t,n1,n2,s,r,i;
	if(argc < 3){
	printf("usage:bin file n1 n2 \n");
	}
	else{
	n1=atoi(argv[1]);
	n2=atoi(argv[2]);

	for(i>=n1;i<=n2;i++)
	{
	t=i;
	while(t>0)
	{
	r=t%10;
	s=s+r;
	t=t/10;
	if(t==8){
	printf("the   result is %d\n",t);
	}
	
	}
	}
	}
	
	
	return;
	}