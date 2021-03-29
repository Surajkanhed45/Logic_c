//Write a program which accept 2 string from user and concat second string after frist string(implement strcat()).

#include<stdio.h>

void strcatX(char *arr,char *brr)
{
	if(arr==NULL)
	{
		return ;
	}
	if(brr==NULL)
	{
		return;
	}
	while(*arr!='\0')//traverse first string till end
	{
		arr++;
	}
	while(*brr!='\0') //copy contains of dstination in source.
	{
		*arr=*brr;
		brr++;
		arr++;
	}
	*arr='\0';
}
int main()
{
	char Arr[50];
	char Brr[30];
	
	printf("Enter frist string:");
	scanf("%[^'\n']s",Arr);
	
	printf("Enter second string:");
	scanf("\n%[^'\n']s",Brr);
	
	strcatX(Arr,Brr);
	printf("%s",Arr);
	
	return 0;
}