//

#include<stdio.h>

void Display(char str[])
{
	printf("Character from string are\n");
		for(;*str!='\0';str++)
		{
			printf("%c\n",*str);
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