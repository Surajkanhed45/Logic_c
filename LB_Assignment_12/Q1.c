/*
Accept number rows and number columns from user and display the below pattern

Input : 4 4
Output: A       B       C       D
		A       B       C       D
		A       B       C       D
		A       B       C       D

*/
#include<stdio.h>
typedef unsigned int UINT;

void Pattern(UINT iRow,UINT iCol)
{
	int i=0,j=0;
	char ch='\0';
	for(i=1;i<=iRow;i++)
	{
		ch='A';
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",ch);
			ch++;

		}
		printf("\n");
	}
}
int main()
{
	UINT iValue1=0,iValue2=0;
	printf("Enter number rows and columns:");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
}
