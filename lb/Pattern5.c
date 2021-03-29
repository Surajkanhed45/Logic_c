
/*
Input->4 A
OutPut->A  A  A  A	
*/

#include<stdio.h>
typedef unsigned int UNINT;
void Pattern(UNINT iNo1,char iNo2)
{
	int iCnt=0;
	printf("\n");
	for(iCnt=1;iCnt<=iNo1;iCnt++)
	{
	printf("\t%c",iNo2);
	}
	printf("\n");
}

 int main()
 {
	UNINT iValue=0,iChar='\0';
	 printf("Enter number:");
	 scanf("%d",&iValue);
	 printf("Enter one character:");
	 scanf(" %c",&iChar);
	 
	 Pattern(iValue,iChar);
	 return 0;
 }	