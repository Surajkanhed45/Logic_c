/*
function name= To display Even factor 
input=integer
output=integer
descreption=Accept any number from user and print only Even factor of that number 2in decending order
date=02/03/2021
Author=Suraj Rajkumar Kanhed

*/

#include<stdio.h>
void DisplayFactor(int iNo)
{
	int i=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for (i=iNo-1;i>=1;i--)
	{
		if(iNo%i==0)
		{
			printf(" %d",i);
		
		}
	}
	
	
}