//Write a program which accept string from user and count number of capital character.

#include<stdio.h>

int UpperCount(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!=0)
	{
	if(*str>='A' && *str<='Z')
	{
		iCnt++;
	}
	str++;
	}
	return iCnt;
}
int main()
{
	char Arr[10];
	int iRet=0;
	printf("Enter string:");
	scanf("%[^\n]s",Arr);
	
	iRet=UpperCount(Arr);
	printf("Count of upper character is:%d\n",iRet);
	
	
	return 0;
}
