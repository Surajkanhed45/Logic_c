// write a accept number from user and calculate the frequency of digit
#include<stdio.h>

int FrequncCount(int iNo1,int iNo2)
{
	int iDigit=0,iCnt=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	while(iNo1>0)
	{
		iDigit=iNo1%10;
		if(iDigit==iNo2)
		{
			iCnt++;
		}
		iNo1=iNo1/10;
	}
	return iCnt;
}

int main()
{
	int iValue1=0,iValue2=0,iRet=0;
	printf("Enter number:");
	scanf("%d",&iValue1);
	printf("Enter any digit:");
	scanf("%d",&iValue2);
	
	
	iRet=FrequncCount(iValue1,iValue2);
	printf("Freuncy is:%d",iRet);
	
	return 0;
}
