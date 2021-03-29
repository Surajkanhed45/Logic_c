////write a program which accept string from user and display the only digit from that string.


#include<stdio.h>

int SpaceCount(char *str)
{
	int iCnt=0;
	while(*str!=0)
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
	char Arr[20];
	int iRet=0;
	printf("Enter the string:");
	scanf("%[^'\n']s",Arr);
	
	iRet=SpaceCount(Arr);
	printf("In between string spaces are : %d",iRet);
	
	
	return 0;
}