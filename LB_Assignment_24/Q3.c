////write a program which accept string from user and convert it into toggle case.


#include<stdio.h>

void toggleX(char *str)
{
	
	while(*str!=0)
	{
		if((*str>='a')&&(*str<='z'))
		{
			*str=*str-32;
		}
		else if((*str>='A')&&(*str<='Z'))
		{
			*str=*str+32;
		}
		str++;
	}
	
}
int main()
{
	char Arr[20];
	printf("Enter the string:");
	scanf("%[^'\n']s",Arr);
	
	toggleX(Arr);
	printf("Modified string is : %s",Arr);
	
	
	return 0;
}