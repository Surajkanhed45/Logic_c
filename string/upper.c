//

#include<stdio.h>
int strlwrX(char *str)
{
	if(str==NULL)
	{
		return;
	}
	while(*str !='\0')
	{
	if(*str>='A' && *str<='Z')
	{
		*str=*str+32;
		
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
	
	strlwrX(Arr);
	printf("Updated string is: %d\n",Arr);
	return 0;
}