#include<stdio.h>
int main()
{
	int num;
	printf("Enter number to print a pattern \n");
	scanf("%d",&num);
	int i,j;
	for(i=1;i<=num;i++)
	{
		for(j=i;j<=num;j++)
		printf("*");
		printf("\n");
	}
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=i;j++)
		printf("*");
		printf("\n");
	}
}
