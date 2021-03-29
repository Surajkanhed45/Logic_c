//write a program which accept range from user and return the addition of that range.(range contain positive number only)

#include<stdio.h>

int AddRange(int iNo1,int iNo2)
{
	int iCnt=0;
	int iSum=0;
	
	if(iNo1<0 )
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	
	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
	
}
int main()
{
	
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("Enter first number:");
	scanf("%d",&iValue1);
	printf("Enter second number:");
	scanf("%d",&iValue2);
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}
	if(iValue1<iValue2)
	{
	iRet=AddRange(iValue1,iValue2);
	printf("Addition of all number in the range:%d",iRet);
	}
	else
	{
		printf("Invalid number");
	}
	
}
