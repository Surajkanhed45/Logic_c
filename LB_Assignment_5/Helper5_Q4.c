/*
function name= To display non factor summation 
input=integer
output=integer
descreption=Accept any number from user and print only summation non factor of that number 
date=02/03/2021
Author=Suraj Rajkumar Kanhed

Enter any number:12
          output:50

*/

#include<stdio.h>
void DisplaySumOfFactor(int iNo)
{
	int sum=0;
	int i=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for (i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
			
		sum=sum+i;
		
		
		}
	}
	printf(" %d",sum);
	
	
}