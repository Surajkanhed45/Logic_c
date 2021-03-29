//

#include<stdio.h>
void Reverse(char *str)
{
	char *start,*end;
	char temp;
	if(str==NULL)
	{return ;}
	
	start=str;
	end=str;
	while(*end!='\0')
	{
		end++;
	}
	end--;
	while(start<end)
	{
		temp=*start;
		*start=*end;
		*end=temp;
		start++;
		end--;	
	}
}
int main()
{
	char Arr[10];
	
	printf("Enter string:");
	scanf("%[^'\n']s",Arr);
	
	Reverse(Arr);
	printf("%s",Arr);
	return 0;
}