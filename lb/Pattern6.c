/*
Input->4 
OutPut->A  B  C  D	
*/

#include<stdio.h>
typedef unsigned int UNINT;
void Pattern(UNINT iNo1)
{
	int iCnt=0;
	int ch='\0';
	ch='A';
	printf("\n");
	for(iCnt=1;iCnt<=iNo1;iCnt++)
	{
		
	printf("\t%c",ch);
	ch++;
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