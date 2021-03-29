/*
function name= To display non factor summation 
input=integer
output=integer
descreption=Accept any number from user and print only summation non factor of that number 
date=02/03/2021
Author=Suraj Rajkumar Kanhed

Enter any number:12
Addition of Factors:16
Addition of Non-Factor:50
Diffrence: -34

Enter any number:66
Addition of Factors:78
Addition of Non-Factor:2067
Diffrence: -1989

*/

#include<stdio.h>
void DisplaySumOfFactor(int iNo)
{
	int sum=0;
	int nonsum=0;
	int i=0;
	if(iNo<=0)
	{
		iNo=-iNo;
	}
	for (i=1;i<iNo;i++)
	{
		if(iNo%i==0)
		{
			
		sum=sum+i;
		
		
		}
	}
	for (i=1;i<iNo;i++)
	{
		if(iNo%i!=0)
		{
			
		nonsum=nonsum+i;
		
		
		}
	}
	printf("Addition of Factors:%d\n",sum);
	printf("Addition of Non-Factor:%d\n",nonsum);
	printf("Diffrence: %d\n",sum-nonsum);
	
	
}