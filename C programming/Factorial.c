/*Find the factorial of given number..*/
#include<stdio.h>
int main()
{
	printf("Enter an integer to get Factorial..\n");
	int n,fact=1,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	fact*=i;
}
	printf(" Factorial is  .. %d ",fact);
	return 0;
}
