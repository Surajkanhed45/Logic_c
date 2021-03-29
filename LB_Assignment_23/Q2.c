//Write a program which accept string from user and count number small character.

#include<stdio.h>
int LowerCount(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!=0)
	{
	if((*str>='a') && (*str<='z'))
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
	
	iRet=LowerCount(Arr);
	printf("lower case is :%d\n",iRet);
	
	
	return 0;
}