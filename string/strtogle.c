//

#include<stdio.h>
int strtoggle(char *str)
{
	while(*str !='\0')
	{
	if(*str>='A' && *str<='Z')
	{
		*str=*str+32;
		
	}
	else if(*str>='a' && *str<='z')  //else if is important
	{
		*str=*str-32;	
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