//Write a program which accept range from user and display all number in between that range.

#include<stdio.h>

void Display(int iNo1,int iNo2)
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
	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		printf("%d  ",iCnt);
	}
}

int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter first number:");
	scanf("%d",&iValue1);
	printf("Enter second number:");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	return 0;
	
}