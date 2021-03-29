//Write a program which accept one number from user and print that number of $ and *.
//Input ->Enter number:4
//OutPut->$       *       $       *       $       *       $       *
#include<stdio.h>

int PrintPattern(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("$	*\t");
		
	}
	
}
int main()
{
	int iValue=0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	PrintPattern(iValue);
	return 0;
}