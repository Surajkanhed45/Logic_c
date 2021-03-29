//Accepy number from user and checkwether that number is prime or not.

#include<stdio.h>
#include<Stdbool.h>

bool CheckPrime(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=2;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			break;
		}
	}
	if (iCnt==(iNo/2)+1)
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
	bool bRet=false;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	bRet=CheckPrime(iValue);
	if(bRet==true)
	{
		printf("%d is Prime number",iValue);
	}
	else
	{
		printf("%d is not Prime number",iValue);
	}
	return 0;
}


