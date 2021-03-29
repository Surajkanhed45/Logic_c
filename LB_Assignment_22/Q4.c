//Accept character  from user and check it special or not.

#include<stdio.h>
#define TRUE 1
#define FALSE 0

int CheckSpecial(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	while(*str!=0)
	{
		if((*str=='!')||(*str=='@')||(*str=='#')||(*str=='$')||(*str=='%')||(*str=='^')||(*str=='&')||(*str=='*'))
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
	
	
	iRet=CheckSpecial(Arr);
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