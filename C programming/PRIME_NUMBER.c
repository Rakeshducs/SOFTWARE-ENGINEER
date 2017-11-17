/*WAP to find whether Given number is Prime number or not */
#include<stdio.h>
int main()
{
	printf("Enter an integer \n");
	int n,p=1,count=0;
	scanf("%d",&n);
	while(p<=n)
	{
		if(n%p==0)
		count++;
		p++;
	}
	if(count==2)
	printf("Number is PRIME!..\n");
	else
	printf("Number is not PRIMIE!... \n");
}
