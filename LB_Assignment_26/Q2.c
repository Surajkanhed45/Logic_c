//Write a program which accept string from user and copy the contains of that string into another string.

#include<stdio.h>
void StrNCpyX(char *arr,char *brr,int iCnt)
{
	if(arr==NULL)
	{
		return;
	}
	if(brr==NULL)
	{
		return;
	}
	while((*arr!='\0') &&(iCnt!=0))
	{
		*brr=*arr;
		arr++;
		brr++;
		iCnt--;
	}
	*brr='\0';
}
int main()
{
	char Arr[30]="Marvellous Multi OS";
	char Brr[30];
	
	StrNCpyX(Arr,Brr,10);
	printf("%s\n",Brr);
	
	
	return 0;
}