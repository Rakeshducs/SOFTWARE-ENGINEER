/*WAP to swap two numbers using bitwise operators */
#include<stdio.h>
int main()
{
	printf("Enter two numbers for swapping \n");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Before Swapping A and B are respectively %d %d",a,b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("After Swapping A and B are respectively %d %d",a,b);
}
