//Accept string from user and check it contains vowel or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int CheckVowel(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!=0)
	{
		if((*str=='a')||(*str=='i')||(*str=='e')||(*str=='o')||(*str=='u')||(*str=='A')||(*str=='I')||(*str=='E')||(*str=='O')||(*str=='U'))
		{
			iCnt++;
		}
		*str++;
	}
	if(iCnt!=0)
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
	char Arr[10];
	int iRet=0;
	printf("Enter the string :");
	scanf("%[^\n]s",Arr);
	
	
	iRet=CheckVowel(Arr);
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