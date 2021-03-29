//Write a program which accept range from user and return addition of Even number.

#include<stdio.h>
int AddEven(int iNo1,int iNo2)
{
	int iCnt=0;
	int iSum=0;
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		if(iCnt%2==0)
		{
			iSum=iSum+iCnt;
		}
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
	if(iValue1<0)
	{
		iValue1=-iValue1;
	}
	scanf("%d",&iValue2);
	if(iValue1<iValue2)
	{
	iRet=AddEven(iValue1,iValue2);
	printf("Addition of Even number is:%d",iRet);
	}
	else
	{
		printf("Invalid Number");
	}
	return 0;
}
/*
Output->
Enter first number:10
Enter second number:18
Addition of Even number is:70

Enter first number:23
Enter second number:30
Addition of Even number is:108

Enter first number:-10
Enter second number:2
Invalid Number

Enter first number:90
Enter second number:18
Invalid Number
*/