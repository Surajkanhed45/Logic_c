//Write a program which accept one number from user and count freuency of 4 in it.
#include<stdio.h>
int CheckFrequency(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if (iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==4)
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
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	iRet=CheckFrequency(iValue);
	printf("frequency of 4 in %d is %d",iValue,iRet);
	
	return 0;
}



