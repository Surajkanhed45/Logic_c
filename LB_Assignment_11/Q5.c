/*Accept number of rows and columns from user and display bellow pattern.
Input :4 4
Output:

        1       1       1       1
        2       2       2       2
        3       3       3       3
        4       4       4       4
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
			printf("\t%d",i);
		}
		printf("\n");
	}
}
int main()
{
	UINT iValue1=0,iValue2=0;
	printf("Enter number of rows and columns :");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}