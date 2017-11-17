/*WAP to find whether Given number is Palindromic number or not?*/
#include<stdio.h>
int main()
{
	printf("Enter a number \n");
	int num,r,rev=0;
	scanf("%d",&num);
	int n=num;
	while(n>0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(num==rev)
	printf("Your Number is PALLINDROMIC NUMBER..!\n");
	else
	printf("SORRY! Your number is not PALLINDROMIC NUMBER...!\n");
}
