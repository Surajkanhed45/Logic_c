//Accept two number from user and calculet its power
//input  2 4
//output   16


int Power(int iNo1,int iNo2)
{
	int i=0;
	int iMult=1;
	
	if(iNo1<0)
	{
		iNo1=-iNo2;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}
	
	for(i=1;i<=iNo2;i++)
	{
		iMult=iMult*iNo1;   // iNo1=5,iNo2=3 (1=1*5 ) (5=5*5) (25=25*5) = iMult(125)
	}
	return iMult;
}

#include<stdio.h>

int main()
{
	int iValue1=0,iValue2=0;
	int iRet=0;
	
	printf("Enter first number:");
	scanf("%d",&iValue1);
	
	printf("Enter second number:");
	scanf("%d",&iValue2);
	iRet=Power(iValue1,iValue2);
	printf("Power of %d of %d is : %d ",iValue1,iValue2,iRet);
	
	
	return 0;
}