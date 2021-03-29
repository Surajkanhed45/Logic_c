/*
iRow=4  iCol=4

1       2       3       4
*       *       *       *
1       2       3       4
*       *       *       *
*/


#include<stdio.h>
typedef unsigned int UNINT;

void Pattern(UNINT iRow,UNINT iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i%2==1)
			{
			printf("%d\t",j);
			}
			else
			{
				printf("*\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	UNINT iValue1=0,iValue2=0;
	printf("Enter number of rows and column:");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
	
}