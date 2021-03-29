//Program to check a Accepted number from user which is divisiable by 5 or not.
/*
START
	get function to check given condition is true or false  i.e Check()
	get one variable for loop i.e int i=0
		if given number is divisiable by 5 then return TRUE and else return FALSE
		if condition is TRUE then print Number is divisiable by 5
		if condition is FALSE then print number is not divisiable by 5		
END
*/
#include"Header_Q4.h"
typedef int BOOL;
#define TRUE 1
#define FALSE 0


int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	
	if(bRet==TRUE)
	{
		printf("Divisiable by 5");
	}
	else
	{
		printf("Not divisiable by 5:");
	}
	return 0;
}