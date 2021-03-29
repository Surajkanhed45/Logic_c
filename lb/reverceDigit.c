//Accept a number from user and reverce that number.
#include<stdio.h>

int Reverse(int iNo)
{
	int iDigit=0,Revs=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	/*while(iNo>0)
	{
		iDigit=iNo%10;
		Revs=(Revs*10)+iDigit;
		iNo=iNo/10;
	}*/

	for(;iNo>0;iNo=iNo/10)
	{
		iDigit=iNo%10;
		Revs=(Revs*10)+iDigit;
	}
	return Revs;
}


int main()
{
	int iValue=0,iRet=0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);
	printf("Reverse number is:%d",iRet);
	
	return 0;
}



