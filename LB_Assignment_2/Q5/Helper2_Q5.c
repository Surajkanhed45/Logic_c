/*
function name= Check given number is Even or odd
input=integer
output=integer
descreption=Number entered from user check whether even or odd .
date=24/02/2021
Author=Suraj Rajkumar Kanhed

*/

#define TRUE 1
#define FALSE 0
typedef int BOOL;
BOOL CheckEven(int iNo)
{
	if (iNo%2==0)
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}