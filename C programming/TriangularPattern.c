#include<stdio.h>
int main()
{
	printf("Enter an integer to print Triangular Pattern\n ");
	int n,i,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<n;j++)
		printf("   ");
		for(j=1;j<=i*2-1;j++)
		printf(" * ");
		printf("\n");
	}
}
