//

#include<stdio.h>
#define true 1
#define false 0

int CheckCharacter(char ch)
{
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	
	char ch;
	int iRet=false;
	printf("Enter one character:");
	scanf("%c",&ch);
	
	iRet=CheckCharacter(ch);
	if(iRet==true)
	{
		printf("%c is a Alphabet",ch);
	}
	else
	{
		printf("%c is not a Alphabet",ch);
	}
}