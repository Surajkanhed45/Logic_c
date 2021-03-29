//
//Accept character from user and check whether it is character is lower case or not.(a-z)

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int CheckLowerCase(char ch)
{
	if(ch>='a' && ch<='z')
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
	
	iRet=CheckLowerCase(ch);
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