/*WAP to find Given number is ARMOUSTRONG NUMBER OR NOT*/
#include<stdio.h>
int main()
{
	printf("Enter a number\n");
	int num,r,sum=0;
	scanf("%d",&num);
	int n=num;
	while(n>0)
	{
		r=n%10;
		sum+=r*r*r;
		n=n/10;
	}
	if(sum==num)
	printf("CONGRATULATION BRO! Your Number is ARMSTRONG NUMBER \n");
	else
	printf("SORRY! Your number is not Armstrong number \n");
}
