//Write a program which accept string from user and diaplay the small character only.


#include<stdio.h>

void StrCpySmallX(char *arr,char *brr)
{
	if(arr==NULL)
	{
		return;
	}
	if(brr==NULL)
	{
		return;
	}
	while(*arr!='\0')
	{
		if((*arr>='a')&&(*arr<='z')||(*arr==' '))
		{
			*brr=*arr;
			brr++;
		}
		arr++;
	}
	
	*brr='\0';
	
}
int main()
{
	char Arr[30];
	char Brr[30];
	
	printf("Enter the string:");
	scanf("%[^'\n']s",Arr);
	
	StrCpySmallX(Arr,Brr);
	printf("%s ",Brr);
	
	
	return 0;
	
}