//Accept one number from user and return factorial using while 


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
	
	int fact=1;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo>0)
	{
		fact=fact*iNo;
		iNo--;
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