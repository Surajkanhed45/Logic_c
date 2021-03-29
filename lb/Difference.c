//Write a program to calculate the Diffrence between summation of factor and summation of non factor 


#include<stdio.h>

int Difference(int iNo)
{
	int iCnt=0;
	int iSum=0 ,nSum=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			iSum=iSum+iCnt;
		}
		else
		{
			nSum=nSum+iCnt;
		}
	}
	return iSum-nSum;
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	iRet=Difference(iValue);
	printf("Difference is:%d",iRet);
	
	
	return 0;
}