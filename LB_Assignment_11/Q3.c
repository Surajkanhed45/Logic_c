/*Accept number of rows and number of column from user and display the bellow pattern.

Input:3 5
Output:

5       4       3       2       1
5       4       3       2       1
5       4       3       2       1

*/

#include<stdio.h>
typedef unsigned int UINT;

void Pattern(UINT iRow,UINT iCol)
{
	int i=0,j=0;
	printf("\n");
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			printf("%d\t",j);
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