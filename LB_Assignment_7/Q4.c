//Write a program which accept number from user and return multiplication of its digits
//Input ->Enter any number:7854
//Output->Multiplication of digits in 7854 is :1120

#include<stdio.h>
int multDigit(int iNo)
{
	int iDigit=0;
	int mult=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		mult=mult*iDigit;
		iNo=iNo/10;
	}
	return mult;
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	iRet=multDigit(iValue);
	printf("Multiplication of digits in %d is :%d",iValue,iRet);
	return 0;
}