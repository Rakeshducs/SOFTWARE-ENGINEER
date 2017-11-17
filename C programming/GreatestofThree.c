/* WAP to find the greatest of the three numbers */
#include<stdio.h>
int main()
{
	printf("Enter three numbers to find greatest \n");
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		printf("Greatest Number is %d",a);
		else
		printf("Greatest Number is %d",c);
	}
	else if(b>c)
	printf("Greatest Number is %d",b);
	else
	printf("Greatest Number is %d",c);
}
