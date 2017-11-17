/*WAP for fibonacci Series using recursion method */
#include<stdio.h>
int fibonacci(int n);
int main()
{
	printf("Enter a number to print FIBONACCI'S SERIES\n");
	int num,i;
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	printf("%d ",fibonacci(i));
}
int fibonacci(int a)
{
	if(a==0||a==1)
	return a;
	else
	return fibonacci(a-2)+fibonacci(a-1);
}
