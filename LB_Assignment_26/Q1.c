//write a program which accept string from user and copy the contains of that string .(Implement strcpy() function.)

#include<stdio.h>

void StrCpyX(char *arr,char *brr)
{
	if(arr==NULL)
	{
		return;
	}
	if(brr==NULL)
	{
		return ;
	}
	while(*arr!=0)
	{
		*brr=*arr;
		arr++;
		brr++;
	}
	*brr='\0';
	
}
int main()
{
	char Arr[40]="C programming with piyush kanhed";
	char Brr[40];
	
	StrCpyX(Arr,Brr);
	printf("%s\n",Brr);
	
	return 0;
}