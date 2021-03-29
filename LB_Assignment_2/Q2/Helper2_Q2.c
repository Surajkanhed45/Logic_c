/*
function name= To display star(*)
input=integer
output=integer
descreption=progam to print number of star(*) .
date=24/02/2021
Author=Suraj Rajkumar Kanhed

*/
#include<stdio.h>
void Display(int iNo)
{
	
	int iCnt=iNo;
	while(iCnt>0)
	{
		printf("*\n");
		iCnt--;
	}
}
