/*WAP to Swap two numbers without using temporary variable */
#include<stdio.h>
void swap(int* ,int* );
int main()
{
	printf("Enter two numbers \n");
	int a,b;
	scanf("%d %d",&a,&b);
	printf("Before Swapping A and B are respectively %d %d",a,b);
	swap(&a,&b);
	printf("After Swapping A and B are respectively %d %d",a,b);
}
void swap(int* a,int* b )
{
	int temp= *a;
	*a= *b;
	*b=temp;
}
