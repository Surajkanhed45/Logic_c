//

#include<stdio.h>
int aCount(char *str)
{
	int iCnt=0;
	if(str==NULL)
	{
		return 0;
	}
	while(*str!='\0')
	{
		if(*str==' ')
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
	
	iRet=aCount(Arr);
	printf("frequency of A/a is: %d\n",iRet);
	
	return 0;
	
	
	return 0;
}