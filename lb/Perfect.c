//Accept one number from user and check whether that number is perfect number is or not.

#include<stdio.h>
#include<stdbool.h>

bool Perfect(int iNo)
{
	int iCnt=0;
	int sum=0;
	for(iCnt =1;iCnt<=iNo/2;iCnt++)
	{
		if (iNo%iCnt==0)
		{
			sum=sum+iCnt;
		}
	}
	if(iNo==sum)
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
	bool iRet=false;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	iRet=Perfect(iValue);
	if(iRet==true)
	{
		printf("%d is perfect number",iValue);	
	}
	else
	{
		printf("%d is not perfect number",iValue);
	}
	
	return 0;
	
}