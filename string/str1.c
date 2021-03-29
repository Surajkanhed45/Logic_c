//
#include<stdio.h>

int main()
{
	char Arr[50];
	
	printf("Enter your name:");
	scanf("%[^'\n']s",Arr);     
	//fgets(Arr,40,stdin);   //fgets(kashat,kiti,kuthun);
	//gets(Arr);
	//scanf("%s",Arr);
	
	printf("Your name is:%s\n",Arr);
	
	return 0;
	
}