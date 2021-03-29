//Accept number from user and return the Minimum digit number from yhat number.

#include<stdio.h>
int LargestDigit(int iNo)
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
int iValue=0,iRet=0;

printf("Enter number:");
scanf("%d",&iValue);

iRet=LargestDigit(iValue);
printf("Minimum digit is:%d",iRet);


return 0;

}