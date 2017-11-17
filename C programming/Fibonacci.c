#include<stdio.h>
int main()
{
	printf("Enter a number to GENERATE FIBONACCI SERIES\n");
	int num,i,a=0,b=1,c;
	scanf("%d",&num);
	if(num==1)
	printf("%d",a);
	else if(num==2)
	printf("%d   %d ",a,b);
	else
	{
		printf("%d  %d ",a,b);
		for(i=3;i<=num;i++)
		{
		c=a+b;
		a=b;
		b=c;
		printf("%d ",c);
	}
	}
	
}

