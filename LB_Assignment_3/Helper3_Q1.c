/*
function name= To print Even number 
input=integer
output=integer
descreption=get one number from user and print that number of even number.
date=26/02/2021
Author=Suraj Rajkumar Kanhed

*/

#include<stdio.h>
void PrintEven(int iNo)
{
	
	if(iNo<=0)
	{
		return;
	}
	iNo=2*iNo;
	for(int i=1;i<=iNo;i++)
	{
		
		if (i%2==0)
		{
			printf("%d   ",i);
		}
		
		
	}
	
	
	}