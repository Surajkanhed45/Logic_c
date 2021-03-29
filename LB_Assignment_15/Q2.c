
/*
Accept number of rows and column from user and display the follo pattern.
iRow=4  iCol=4

*       *       *       *
*       *       *
*       *
*

*/

#include<stdio.h>
typedef unsigned int UINT;
void Pattern(UINT iRow,UINT iCol)
{
	int i=0,j=0;
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("*\t");
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