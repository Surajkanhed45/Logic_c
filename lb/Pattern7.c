/*
Input->4 
OutPut->A  B  C  D	
*/

#include<stdio.h>
typedef unsigned int UNINT;
void Pattern(UNINT iNo)
{
	int iCnt=0;
	int ch='\0';
	if(iCnt<0 && iCnt>=26)
	{
		printf("Please Enter value in between 1 to 26");
		return;
	}
	printf("\n");
	for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
	{	
	printf("\t%c",ch);
	}
	printf("\n");
}

 int main()
 {
	UNINT iValue=0,iChar='\0';
	 printf("Enter number:");
	 scanf("%d",&iValue);
	 
	 Pattern(iValue);
	 return 0;
 }