//Write a program which accept one number from user and return count of Digits in between 3 and 7
//Input ->Enter any number:8456
//Output->Number of Digits lies in between 3 and 7 is:3

#include<stdio.h>
int getCount(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>3 &&iDigit<7)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	return iCnt;
}

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	iRet=getCount(iValue);
	printf("Number of Digits lies in between 3 and 7 is:%d",iRet);
}