//Accept a number from user and reverce that number.
#include<stdio.h>
#include<stdbool.h>
bool CheckPalindrom(int iNo)
{
	int iDigit=0,Revs=0,iTemp=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	iTemp=iNo;   //Becouse in while loop iNo becomes zero(0) in the end of loop.
	while(iNo>0)
	{
		iDigit=iNo%10;
	     Revs=(Revs*10)+iDigit;
		iNo=iNo/10;
	}

	/*for(;iNo>0;iNo=iNo/10)
	{
		iDigit=iNo%10;
		Revs=(Revs*10)+iDigit;
	}*/
	if(Revs==iTemp)
	{
	return true;
	}
	else
	{
	return false;
	}
}
int main()
{
	int iValue=0;
	bool iRet=false;
	printf("Enter number:");
	scanf("%d",&iValue);
	iRet=CheckPalindrom(iValue);
	if(iRet==true)
	{
	printf("It is Palindrom");
	}
	else
	{
		printf("It is Not palindrom");
	}
	return 0;
}

