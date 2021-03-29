/*
Accept number of rows and number of column from user and display the below pattern.

Input:3 4

Output:

1       2       3       4
5       6       7       8
9       10      11      12

*/
#include<stdio.h>
typedef unsigned int UINT;
void Pattern(UINT iRow,UINT iCol)
{
	int i=0,j=0,iTemp=1;
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",iTemp);
			iTemp++;
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