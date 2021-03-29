//Write a program which  accept a range from user and display number in reverce order in that range
/*
Input:
		Enter first number:10
		Enter second number:18
Output:
		18  17  16  15  14  13  12  11  10
*/
#include<stdio.h>
int Reverse(int iNo1,int iNo2)
{
	int iCnt=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	for(iCnt=iNo2;iCnt>=iNo1;iCnt--)
	{
		printf("%d  ",iCnt);
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("Enter first number:");
	scanf("%d",&iValue1);
	printf("Enter second number:");
	scanf("%d",&iValue2);
	
	Reverse(iValue1,iValue2);
	
	return 0;
}

