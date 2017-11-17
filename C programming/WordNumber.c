#include<stdio.h>
int main()
{
	printf("Enter an integer between 1 and 9 to name words\n");
	int n;
	do{
		scanf("%d",&n);
		switch(n)
		{
			case 1:
				printf("ONE\n");
				break;
			case 2:
				printf("TWO\n");
				break;
			case 3:
				printf("THREE\n");
				break;
			case 4:
				printf("FOUR\n");
				break;
			case 5:
				printf("FIVE\n");
				break;
			case 6:
				printf("SIX\n");
				break;
			case 7:
				printf("SEVEN\n");
				break;
			case 8:
				printf("EIGHT\n");
				break;
			case 9:
				printf("NINE\n");
				break;
			default:printf("WRONG CHOICE!\n");
		}
				
		}while(n<=9&&n>=1);
	}

