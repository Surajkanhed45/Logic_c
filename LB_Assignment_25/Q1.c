//Write a program which accept string from user and accept one character . check whether that character is present in the string or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int CheckCharacter(char *str,char ch)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if(*str==ch)
		{
			iCnt++;
		}
		str++;
	}
	if(iCnt>0)
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
	char Arr[20];
	char cValue;
	int iRet=FALSE;
	printf("Enter the string :");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter one character :");
	scanf("\n%c",&cValue);
	
	iRet=CheckCharacter(Arr,cValue);
	if(iRet==TRUE)
	{
		printf("Character found");
	}
	else
	{
		printf("Character not found");
	}
	
	return 0;
}