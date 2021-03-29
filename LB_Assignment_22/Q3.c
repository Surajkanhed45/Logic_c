/*3. Accept character from user. If it is capital then display all the
characters from the input characters till Z. If input character is small
then print all the characters in reverse order till a. In other cases
return directly.*/

#include<stdio.h>

void UpToEnd(char ch)
{
	int i=0;
	int j=0;
	if(ch>='A' && ch<='Z')
	{
	for(i=ch;i<='Z';i++)
	{
		printf("%c\n",ch);
		ch++;
	}
	}
	if(ch>='a' && ch<='z')
	{
	for(j=ch;j<='z';j++)
	{
		printf("%c\n",ch);
		ch++;
	}
	}
}
int main()
{
	char cValue='\0';
	printf("Enter one character:");
	scanf("%c",&cValue);
	
	UpToEnd(cValue);
	
	return 0;
}