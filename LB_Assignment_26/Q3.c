//Write a program which accept string from user and copy capital character of that string into another string.


#include<stdio.h>

void StrCpyCapX(char *arr,char *brr)
{
	if(arr==NULL)
	{
		return ;
	}
	if(brr==NULL)
	{
		return ;
	}
	while(*arr!='\0')
	{
		if((*arr>='A')&&(*arr<='Z')||(*arr==' '))
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
	
	StrCpyCapX(Arr,Brr);
	printf("%s",Brr);
	
	
	return 0;
}