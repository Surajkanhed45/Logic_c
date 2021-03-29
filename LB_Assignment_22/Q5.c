//Accept a character from user and display decimal,hexadecimal,octal number of that number

#include<stdio.h>

void Display(char ch)
{
	printf("decimal :%d\n",ch);
	printf("Hexadecimal :%x\n",ch);
	printf("Octal :%o\n",ch);
	
}
int main()
{
	char cValue='\0';
	printf("Enter character:");
	scanf("%c",&cValue);
	
	Display(cValue);
	
	return 0;
}