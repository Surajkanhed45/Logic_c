/*
Accept marks from user and display the result according bellow marks:

 0 to 35 fail
35 to 50 pass class
50 to 60 second class
60 to 70 first class
70 to 100 Distintion

*/

#include<stdio.h>
#include<stdbool.h> //Header file is include for 

////////////////////////////////////////////////////////////////////////
//Function name:CheckResult
//Input :integer
//output:Boolean (True /False)
//Descreption: check whether given first number is divisiable by second number.
//date:01/03/2021
//Author:Suraj Rajkumar Kanhed
/////////////////////////////////////////////////////////////////////////

void CheckResult(int iMarks)
{
	if((iMarks<0) || (iMarks>100)) //input Filter
	{
		printf("Invalid number");
		return;
	}
	if(iMarks<35)//Condition
	{
	printf("Student is fail");
	}
	else if((iMarks>=35) && (iMarks<50) )
	{
	printf("Student is pass in 3rd class");
	}
	else if((iMarks>=50) && (iMarks<60))
	{
		printf("Student pass with second class");
	}
	else if((iMarks>=60) && (iMarks<70))
	{
		printf("Student pass with First class");
	}
	else 
	{
		printf("Student is pass with Distinction");
	}
	
}
int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter your marks:");
	scanf("%d",&iValue);
	CheckResult(iValue);
	
	
	return 0;
}