/*
Accept number of rows and number of column from user and display the bellow Pattern.
Input: 3 5

Output:

A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
*/
#include<stdio.h>
typedef unsigned int UINT;

void Pattern(UINT iRow,UINT iCol)
{
	int i=0,j=0;
	char ch='\0';
	ch='A';
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);
		}
		printf("\n");
		ch++;
		
	}
}
int main()
{
	UINT iValue1=0,iValue2=0;
	printf("Enter number of rows and column:");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	
	return 0;
}