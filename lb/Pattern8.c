
/*
Input->3 3
OutPut->

*	*	*
*	*	*
*	*	*

*/

#include<stdio.h>
typedef unsigned int UNINT;
void Pattern(UNINT iRow,UNINT iCol)
{
	int i=0,j=0;
	prinf("\n");
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
	UNINT iValue1=0,iValue2=0;
	 printf("Enter number of rows:");
	 scanf("%d",&iValue1);
	 printf("Enter number of Column:");
	 scanf(" %d",&iValue2);
	 
	 Pattern(iValue1,iValue2);
	 return 0;
 }	