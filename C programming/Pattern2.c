#include<stdio.h>
int main()
{
	printf("Enter an integer to print a pattern\n");
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		printf("*");
		printf("\n");
	}
}
