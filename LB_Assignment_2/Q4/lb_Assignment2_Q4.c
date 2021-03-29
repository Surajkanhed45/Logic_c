//Program to Accept two number from user and display first number in second number of time.
/*
START
	get function to Display to display output i.e Display()
	get one variable for loop i.e int iCnt=0
	get two parameters for the function that is iValue and iCount
	get input from user in this two parameters 
	calling the display function with two parameters.		
END
*/

#include"Header2_Q4.h"
int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter number:");
	scanf("%d",&iValue);
	
	printf("Enter Frequency:");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	return 0;
}