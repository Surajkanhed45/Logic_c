//

#include<stdio.h>
void Display(char *str)
{
	int i=0,iCnt=0;
	if(str == NULL)
	{
		return;
	}
	while(*str!=0)
	{
		iCnt++;
		str++;
	}
	str--;
	while(iCnt>0)
	{
		printf("%c",*str);
		iCnt--;
		str--;
	}
}


int main()
{
	char Arr[10];
	int iRet=0;
	printf("Enter string:");
	scanf("%[^\n]s",Arr);
	
	Display(Arr);
	printf("\n%s\n",Arr);
	return 0;
}