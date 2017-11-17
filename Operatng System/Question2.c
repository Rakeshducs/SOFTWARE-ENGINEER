/*Question2:-Parent and child execute the same program and different code.*/
#include<stdio.h>
main()
{
int pid;
pid=fork();
if(pid<0)
printf("error");
else if(pid==0)
printf("Child process");
else
{
	printf("I am the parent");
	wait(NULL);
	printf("\nThe child has terminated");
	
}
exit(0);
}
