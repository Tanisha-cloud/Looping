#include<stdio.h>

int main()
{

	int rows;

	printf("\nENTER THE NUMBER OF ROWS FOR A PATTERN TO BE FORMED!");
	scanf("%d",&rows);

	for(int i=1;i<=rows;i++)
	{
		for(int j=1;j<=i;j++)
			printf("01");
			printf("\n");
	}

	return 0;
}
