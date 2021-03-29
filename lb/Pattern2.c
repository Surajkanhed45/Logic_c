
#include<stdio.h>
typedef unsigned int UNINT;
void Pattern(UNINT iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
	printf("*\t#\t");
	}
}

 int main()
 {
	UNINT iValue=0;
	 printf("Enter number:");
	 scanf("%d",&iValue);
	 
	 Pattern(iValue);
	 return 0;
 }