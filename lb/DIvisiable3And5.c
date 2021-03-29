/*in this topic decimal number from user and perform the operation on that number
while performing the operation we required some part of itteration 
Accept number from user and check whether that number is divisiable by 3 and 5

input :10
output:it is not divisiable by 3 & 5.
input:15
output:it is divisiable by 3 and 5.

*/

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//Function name:CheckDivisiable
//Input :integer
//output:Boolean (True /False)
//Descreption: check whether given number is divisiable 3 and 5.
//date:01/03/2021
//Author:Suraj Rajkumar Kanhed
/////////////////////////////////////////////////////////////////////////

bool CheckDivisiable(int iNo)
{
	if(((iNo%3)==0) && ((iNo%5)==0))//Condition
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	int iValue=0;
	bool bRet=false;//bRet become initially false becouse false is internally consider as 0(Zero)
	printf("Enter number:");
	scanf("%d",&iValue);
	
	bRet=CheckDivisiable(iValue);
	if(bRet==true)
	{
		printf("%d is divisiable by 3 and 5",iValue);
	}
	else
	{
	printf("%d is not divisiable by 3 and 5",iValue);	
	}
	return 0;
}