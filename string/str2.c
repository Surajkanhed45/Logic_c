
#include<stdio.h>

int strlenX(char *str)
{
	int iCnt=0;
	while(*str!='\0')
	{
		printf("%d : %c  :%d\n",iCnt,*str,*str);
		iCnt++;
		str++;
	}
	return iCnt;
}
int main()
{
	char Arr[10];
	int iRet=0;
	printf("Enter your Name:");
	scanf("%[^\n]s",Arr);
	//fgets(Arr,10,stdin);
	
	iRet=strlenX(Arr);
	printf("Length of str is:%d",iRet);
	return 0;
}