//Accept string from user and display the diffrence between count of upper case and lower case.

#include<stdio.h>

int DiffLowerUpper(char *str)
{
	int lCnt=0,uCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!='\0')
	{
		if((*str>='A') && (*str<='Z'))
		{
			uCnt++;
		}
		else if((*str>='a') && (*str<='z'))
		{
			lCnt++;
		}
		*str++;
	}
	return lCnt-uCnt;
	
}
int main()
{
	char Arr[10];
	int iRet=0;
	printf("Enter the string:");
	scanf("%[^\n]s",Arr);
	
	iRet=DiffLowerUpper(Arr);
	printf("Difference is : %d\n ",iRet);
	
	
	return 0;
}