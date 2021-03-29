
/*
Accept number of rows and column from user and display the follo pattern.
iRow=5  iCol=5

$       *       *       *       *
#       $       *       *       *
#       #       $       *       *
#       #       #       $       *
#       #       #       #       $

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
			if(i<j)
			{
				printf("*\t");
			}
			else if(i>j)
			{
				printf("#\t");
			}
			else 
			{
				printf("$\t");
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