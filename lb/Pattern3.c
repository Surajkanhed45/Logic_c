
/*
Input:4
output:1	*	2	*	3	*	4	*
*/

#include<stdio.h>
typedef unsigned int UNINT;
void Pattern(UNINT iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
	printf("%d\t*\t",iCnt);
	}
	printf("\n");
}

 int main()
 {
	UNINT iValue=0;
	 printf("Enter number:");
	 scanf("%d",&iValue);
	 
	 Pattern(iValue);
	 return 0;
 }	