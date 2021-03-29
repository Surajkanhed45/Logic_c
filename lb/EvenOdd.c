/*in this topic decimal number from user and perform the operation on that number
while performing the operation we required some part of itteration 
Accept number from user and check whether that number is even or odd

input :4
output:it is even number.
input:7
output:it is odd number

*/

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////
//Function name:CheckEven
//Input :integer
//output:Boolean (True /False)
//Descreption: check whether given number is even or odd.
//date:01/03/2021
//Author:Suraj Rajkumar Kanhed
/////////////////////////////////////////////////////////////////////////

bool CheckEven(int iNo)
{
	if(iNo%2==0)
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
	
	bRet=CheckEven(iValue);
	if(bRet==true)
	{
		printf("%d is even number",iValue);
	}
	else
	{
	printf("%d is odd number",iValue);	
	}
	return 0;
}