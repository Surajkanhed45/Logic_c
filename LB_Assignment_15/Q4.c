
/*
Accept number of rows and column from user and display the follo pattern.
iRow=6  iCol=6

*       *       *       *       *       *
*       *                               *
*               *                       *
*                       *               *
*                               *       *
*       *       *       *       *       *

*/

#include<stdio.h>
typedef unsigned int UINT;
void Pattern(UINT iRow,UINT iCol)
{
	int i=0,j=0;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if((j==1||j==iCol ||i==j)||(i==1||i==iRow))
			{
			printf("*\t");
			}
			else
			{
				printf("\t");
			}
		}
		printf("\n");
	}
}
int main()
{
	UINT iValue1=0,iValue2=0;
	printf("Enter number of rows and column :");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}