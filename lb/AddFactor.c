//Accept one number from user return the addition of its factor.

/*
input:
Enter any number:6
output:
Summation of Factor is :6
input:
Enter any number:20
output:
Summation of Factor is :22
*/
#include<stdio.h>

int FactorSum(int iNo)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}

int main()
{
	int iRet=0;
	int iValue=0;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	iRet=FactorSum(iValue);
	printf("Summation of Factor is :%d\n",iRet);
	return 0;
}