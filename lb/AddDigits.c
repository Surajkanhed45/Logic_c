//Accept number from user and return the addition of that number.
//input:Enter one number:0987654321
//output:Summation of all digits:45
	 

#include<stdio.h>

int SumDigits(int iNo)
{
	int iDigit=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		iSum=iSum+iDigit;  //Without iDigit variable -> isum=isum+(iNo%10)
		iNo=iNo/10;
	}
	return iSum;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter one number:");
	scanf("%d",&iValue);
	iRet=SumDigits(iValue);
	printf("Summation of all digits:%d",iRet);
	return 0;
}