/*WAP to swap two numbers without using temporary variable */
#include<stdio.h>
int main()
{
	printf("Enter two numbers\n");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Before Swapping a and b are respectively %d %d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After Swapping a and b are respectively %d %d",a,b);
}
