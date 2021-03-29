// Accept one number from user and return the factorial of thet number

/*
Enter any number:5
Factorial of 5 is : 120

Enter any number:4
Factorial of 4 is :(4*3*2*1) 24
                    ()
*/
#include<stdio.h>

int Fact(int iNo)
{
	int iCnt=0;
	int fact=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		fact=fact*iCnt;
	}
	return fact;
}

int main()
{
	
	int iValue1=0;
	int iRet=0;
	printf("Enter any number:");
	scanf("%d",&iValue1);
	
	iRet=Fact(iValue1);
	printf("Factorial of %d is : %d",iValue1,iRet);
	return 0;
}




