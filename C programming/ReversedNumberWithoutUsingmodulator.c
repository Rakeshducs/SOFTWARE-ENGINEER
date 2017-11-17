#include<stdio.h>
#include<string.h>
int main()
{
	int arr[10],i=0;
	printf("Enter number \n");
	do{
		scanf("%d",&arr[i]);
		i++;
	}while(arr[i]!='\0');
   i=0;
   int size=0;
	while(arr[i]!='\0')
	{
		size++;
		i++;
		
	}
	int reverse[10];
	int p=0;
	for(i=size-1;i>=0;i--)
	reverse[p++]=arr[i];
	printf("Reverse Number is \n");
	for(i=0;i<size;i++)
	printf("%d",reverse[i]);
}
