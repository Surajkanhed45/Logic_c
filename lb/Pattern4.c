
/*
Input->3
OutPut->*	3	*	2	* 	1
*/

#include<stdio.h>
typedef unsigned int UNINT;
void Pattern(UNINT iNo)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
	printf("*\t%d\t",iCnt);
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