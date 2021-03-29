/*
iRow=4  iCol=4

A
A       B
A       B       C
A       B       C       D
*/


#include<stdio.h>
typedef unsigned int UNINT;

void Pattern(UNINT iRow,UNINT iCol)
{
	int i=0,j=0;
	int ch='\0';
	if(iRow!=iCol)
	{
		return;
	}
	for(i=1;i<=iRow;i++)
	{
		ch='A';
		for(j=1;j<=iCol;j++)
		{
		if(i>=j)
		{
			printf("%c\t",ch);
			ch++;
		}
			
		}
		printf("\n");
	}
}
int main()
{
	UNINT iValue1=0,iValue2=0;
	printf("Enter number of rows and column:");
	scanf("%lu%lu",&iValue1,&iValue2);
	
	Pattern(iValue1,iValue2);
	return 0;
	
}