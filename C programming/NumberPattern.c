#include<stdio.h>
int main()
{
	printf("Enter an integer to print a Number Pattern \n");
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d",j);
		printf("\n");
	}
	for(i=1;i<n;i++)
	{
		for(j=1;j<=n-i;j++)
		printf("%d",j);
		printf("\n");
	}
}
