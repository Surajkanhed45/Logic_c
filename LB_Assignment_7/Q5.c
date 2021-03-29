/*Write a program which accept one number from user and return differnce between summation of even digit \
and the summation of add digits.

Input ->Enter any number:3928
Output->Difference between Summation even digits and odd digits:-2  ->((2+8)-(3+9))->(10-12)->-2

*/

#include<stdio.h>

int sumDigit(int iNo)
{
	int iDigit=0;
	int EvenSum=0;
	int OddSum=0;
	int Difference=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)
		{
			EvenSum=EvenSum+iDigit;
		}
		if(iDigit%2==1)
		{
			OddSum=OddSum+iDigit;
		}
		iNo=iNo/10;
	}
	Difference=EvenSum-OddSum;
	return Difference;
}
int main()
{
	
	int iValue=0;
	int iRet=0;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	iRet=sumDigit(iValue);
	printf("Difference between Summation even digits and odd digits:%d",iRet);
	return 0;
	
}