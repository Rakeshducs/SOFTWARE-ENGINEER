/*WAP to find Greatest number Among ten numbers */
#include<stdio.h>
int main()
{
	int a[10],i,Greatest;
	printf("Enter 10 numbers to find the Greatest Number \n");
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
	Greatest=a[0];
	for(i=0;i<10;i++)
	{
		if(Greatest<a[i])
		Greatest=a[i];
	}
	printf("Greatest Number is %d ",Greatest);
}
