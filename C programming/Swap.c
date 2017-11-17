/* WAP to swap two number using temperory variable*/
#include<stdio.h>
int main()
{
	printf("Enter two numbers \n");
	int a,b;
	scanf("%d %d", &a,&b);
	printf("THANKS! a and b are respectively %d %d \n",a,b);
	int temp=a;
	a=b;
	b=temp;
	printf(" After Swapping a and b are respectively %d %d ",a,b);
}
