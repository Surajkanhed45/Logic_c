//Accept number from user and disply the digits that is entered by user.
//input:4521
//output:  2	 

#include<stdio.h>

int DigitFreuency(int iNo,int i)
{
	int iCnt=0;
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if((i<0)||(i>9))
	{
		printf("Invalide Number");
		return 0;
	}
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit==i)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
return iCnt;	
}
int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	printf("Enter one number:");
	scanf("%d",&iValue1);
	printf("Enter the Digit that you want to search:");
	scanf("%d",&iValue2);
	iRet=DigitFreuency(iValue1,iValue2);
	printf("Number of digits are is:%d",+iRet);
	return 0;
}