/*
function name= To display Even factor 
input=integer
output=integer
descreption=Accept any number from user and print only Even factor of that number 
date=26/02/2021
Author=Suraj Rajkumar Kanhed

*/

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
	int i=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for (i=1;i<iNo;i++)
	{
		if(iNo%i==0 && i%2==0)
		{
			
		
			printf(" %d",i);
		
		}
	}
	
	
}