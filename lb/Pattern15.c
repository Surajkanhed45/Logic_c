/*
iRow=4  iCol=4

#
#       #
#       #       #
#       #       #       #
*/


#include<stdio.h>
typedef unsigned int INT;

void Pattern(INT iRow,INT iCol)
{
	int i=0,j=0;
	if(iRow!=iCol)
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			if(i>=j)
			{
			printf("#\t");
			}
			
		}
		printf("\n");
	}
}
int main()
{
	INT iValue1=0,iValue2=0;
	printf("Enter number of rows and column:");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
	
}