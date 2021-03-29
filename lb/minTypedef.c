//Accept number from user and return the Minimum digit number from yhat number.

#include<stdio.h>
typedef unsigned long int ULONG;
int LargestDigit(ULONG iNo)
{
	int iDigit=0 ,iMin=9;
	if(iNo<0)
	{ iNo=-iNo; }
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit<iMin)
		{
			iMin=iDigit;
			if(iMin==0)
			{
				break;
			}
		}
		iNo=iNo/10;
	}
	return iMin;
	
}

int main()
{
ULONG iValue=0;
int iRet=0;

printf("Enter number:");
scanf("%lu",&iValue);

iRet=LargestDigit(iValue);
printf("Minimum digit is:%d",iRet);


return 0;

}