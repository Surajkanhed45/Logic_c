/*in this topic accept decimal number from user and perform the operation on that number
while performing the operation we required some part of itteration 
Accept two number from user and check whether that second number is divisiable by first number or not

input :10
input:5
output:it is divisiable.

*/

#include<stdio.h>
#include<stdbool.h> //Header file is include for 

////////////////////////////////////////////////////////////////////////
//Function name:CheckDiv
//Input :integer
//output:Boolean (True /False)
//Descreption: check whether given first number is divisiable by second number.
//date:01/03/2021
//Author:Suraj Rajkumar Kanhed
/////////////////////////////////////////////////////////////////////////

bool CheckDiv(int iNo1,int iNo2)
{
	if((iNo1%iNo2)==0)//Condition
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
	int iValue1=0,iValue2=0;
	bool bRet=false;//bRet become initially false becouse false is internally consider as 0(Zero)
	printf("Enter number:");
	scanf("%d",&iValue1);
	printf("Enter second number:");
	scanf("%d",&iValue2);
	
	bRet=CheckDiv(iValue1,iValue2);
	if(bRet==true)
	{
		printf("%d is divisiable by %d",iValue1,iValue2);
	}
	else
	{
	printf("%d is not divisiable %d ",iValue1,iValue2);	
	}
	return 0;
}