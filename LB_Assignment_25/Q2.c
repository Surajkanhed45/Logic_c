//write a program which accept string from user and accept one character from user .Return the frequency of that character.


#include<stdio.h>

int FreqCount(char *str,char ch)
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
	return iCnt;
	
}
int main()
{
	char Arr[20],cValue;
	int iRet=0;
	printf("Enter the string :");
	gets(Arr);
	
	printf("Enter that one character :");
	scanf("\n%c",&cValue);
	
	iRet=FreqCount(Arr,cValue);
	printf("Frequency of that character is:%d",iRet);
	
	
	
	return 0;
}