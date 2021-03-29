//

#include<stdio.h>

void Display(char str[])
{
	printf("Character from string are\n");
		while(*str!='\0')
		{
			printf("%c\n",*str);
			str++;
		}
	
}
int main()
{
	char Arr[40];
	printf("Enter your Name:");
	fgets(Arr,40,stdin);
	
	Display(Arr);
	return 0;
}