#include<stdio.h>
int main()
{
	char ch='A';
	char a,b,c;
	printf("Enter Character to print triangle of Letters\n");
	scanf("%c",&c);
	for(a=ch;a<=c;a++)
	{
		for(b=ch;b<=a;b++)
		printf("%c",b);
		printf("\n");
	}
}
