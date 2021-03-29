/*
function name= Multiplication of factor
input=integer
output=integer
descreption=get one number from user and display the Multiplication of all factor
date=02/03/2021
Author=Suraj Rajkumar Kanhed

*/
#include<stdio.h>
int MultiFactor(int iNo)
{
int multi=1;
for(int i=1;i<iNo;i++)
{
	if (iNo%i==0)
	{
	multi=multi*i;
	}
}
	printf("%d",multi);

	
}
	
	
