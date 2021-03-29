//Accept character from user and check whether it is digit or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int CheckDigit(char ch)
{
	if(ch>='0' && ch<='9')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}
int main()
{
	char ch;
	int iRet=0;
	
	printf("Enter character:");
	scanf("%[^\n]c",&ch);
	
	iRet=CheckDigit(ch);
	if(iRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
		
	}
	
	
	return 0;
}