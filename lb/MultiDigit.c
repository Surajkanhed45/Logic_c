//Accept number from user and return the multiplication of Digit
/*
Input ->Enter a number:56457   -->(5*6*4*5*7)
Output->Multiplication is:4200
*/
#include<stdio.h>
int MultDigit(int iNo)
{
	int iDigit=0;
	int iMult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit!=0)
		{
		iMult=iMult*iDigit;
		}
		iNo=iNo/10;
	}
	return iMult;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	iRet=MultDigit(iValue);
	printf("Multiplication is:%d\n",iRet);
	return 0;
}

