//

#include<stdio.h>
int strtoggle(char *str)
{
	while(*str !='\0')
	{
	if(*str>='A' && *str<='Z')
	{
		*str=*str+('a'-'A');
		
	}
	else if(*str>='a' && *str<='z')
	{
		*str=*str-('a'-'A');	
	}
	*str++;
	}
}


int main()
{
	char Arr[10];
	int iRet=0;
	printf("Enter string:");
	scanf("%[^\n]s",Arr);
	
	strtoggle(Arr);
	printf("Updated string is: %s\n",Arr);
	return 0;
}