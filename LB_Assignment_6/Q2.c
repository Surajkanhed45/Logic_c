//Write a program which accept number from user and check Whether it is contain zero in it or not .




#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
	int iDigit=0,iTemp=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==0)
		{
			iTemp=iDigit;
		}
		iNo=iNo/10;
	}	
	if(iTemp==0)
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
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	iRet=CheckZero(iValue);
	if(iRet==true)
	{
		printf("%d its contains zero.",iValue);
	}
	else
	{
		printf("%d its not contains Zero",iValue);
	}
	return 0;
	
}

