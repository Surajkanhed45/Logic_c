//Write a program which accept string from user and display it inner reverse order.

#include<stdio.h>

void Reverse(char *str)
{
	char *Start,*End;
	char Temp;
	if(str==NULL)
	{
		return;
	}
	Start=str;
	End=str;
	while(*End!='\0')  //for(;*end!='\0';end++);
	{
		End++;
	}
	End--;  //105
	while(Start<End)
	{
		Temp=*Start;
		*Start=*End;
		*End=Temp;
		Start++;
		End--;
	}

}
int main()
{
	char Arr[20];
	
	printf("Enter any string:");
	scanf("%[^'\n']s",Arr);
	
 	Reverse(Arr);
	printf("Reverse string is: %s\n",Arr);
	
	return 0;
}