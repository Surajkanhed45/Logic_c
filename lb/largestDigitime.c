//Accept number from user and return the largest digit number from yhat number.

#include<stdio.h>
int LargestDigit(int iNo)
{
	int iDigit=0 ,iMax=0;
	if(iNo<0)
	{ iNo=-iNo; }
	
	while(iNo>0)
	{
		iDigit=iNo%10;
		if(iDigit>iMax)
		{
			iMax=iDigit;
			if(iMax==9)  //Time complaxcity
			{
				break;
			}
		}
		iNo=iNo/10;
	}
	return iMax;
	
}

int main()
{
int iValue=0,iRet=0;

printf("Enter number:");
scanf("%d",&iValue);

iRet=LargestDigit(iValue);
printf("Largest digit is:%d",iRet);


return 0;

}