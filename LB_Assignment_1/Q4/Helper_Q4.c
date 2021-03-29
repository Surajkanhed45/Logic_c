/*
function name= check condition
input=integer
output=integer
descreption=Accept number from user and check it is divisiable by 5 or not
date=24/02/2021
Author=Suraj Rajkumar Kanhed

*/


#define TRUE 1
#define FALSE 0

int Check(int iNo)
{
	if((iNo%5)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
	return 0;
}