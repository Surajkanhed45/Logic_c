/*
Accept the number of rows and columns from user and display below pattern.

Input:	iRow=4	iCol=3

output: 	*	*	*
			*	*	*
			*	*	*
			*	*	*
*/
#include<stdio.h>
typedef unsigned int UINT;
void Pattern(UINT iRow,UINT iCol)
{
	int i=0,j=0;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	
	
}
int main()
{
	UINT iValue1=0,iValue2=0;
	printf("Enter the number of rows and column:");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}
