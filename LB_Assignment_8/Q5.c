//Write a program which accept number from user and print the multiple of that number.
//Input ->Enter number:4
//Output->4  8  12  16  20
#include<stdio.h>

void Multiple(int iNo)
{
	int iCnt=0;
	int iRet=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo+1;iCnt++)
	{
		iRet=iNo*iCnt;
		printf("%d  ",iRet);
	}
}
int main()
{
	
	int iValue=0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	Multiple(iValue);
}