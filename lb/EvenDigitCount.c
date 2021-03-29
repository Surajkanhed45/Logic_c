//Accept number from user and display the digits of that number seperatally in reverse order
//input:4521
//output:  2	 

#include<stdio.h>

int EvenDigitCount(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo==0)  //Filter(if input is 0(zero) then return Even number is 1)
	{
		return 1;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit%2==0)   //without iDigit variable -> if((iNo%10)%2==0)
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
	printf("Enter one number:");
	scanf("%d",&iValue);
	iRet=EvenDigitCount(iValue);
	printf("Even digits Count is:%d",+iRet);
	return 0;
}