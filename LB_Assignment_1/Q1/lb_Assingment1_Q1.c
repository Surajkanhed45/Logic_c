//Program to divide two number
/*
Algoritham for division
START
	Accept first number from user no1
	Accept second number from user no2
	
	expression is no1 divide no2 (no1/no2)
	return division
STOP	
*/

#include"Header_Q1.h"
int main()
{
	int iValue1=15,iValue2=5;
	
	int iRet=0;
	iRet=Divide(iValue1,iValue2);
	printf("Division is %d",iRet);
	return 0;
	
	
}