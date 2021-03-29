////write a program which accept string from user and display the only digit from that string.


#include<stdio.h>

void ShowDigit(char *str)
{
	
	while(*str!=0)
	{
		if((*str>='0')&&(*str<='9'))
		{
			printf("%c",*str);
		}
		str++;
	}
	
}
int main()
{
	char Arr[20];
	printf("Enter the string:");
	scanf("%[^'\n']s",Arr);
	
	ShowDigit(Arr);

	
	
	return 0;
}