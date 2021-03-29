/*Accept number of rows and number of column from user and display the bellow pattern

Input : 4 3
Output:

1       2       3
1       2       3
1       2       3
1       2       3

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