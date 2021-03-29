//

#include<stdio.h>
void UpperLower(int ch)
{
	if(ch>='A' && ch<='Z')
	{
		printf("%c to %c",ch,ch+32);
	}
	else if(ch>='a' && ch<='z')
	{
		printf("%c to %c",ch,ch-32);
	}
	else
	{
		printf("  %c  ",ch);
	}
	
	
}
int main()
{
	char cValue;
	printf("Enter Character :");
	scanf("%c",&cValue);
	
	UpperLower(cValue);
	
	return 0;
	
}