/*
function name= Convert case of the given character 
input=char
output=char
descreption=Accept one character from user and convert the case of that character.
date=26/02/2021
Author=Suraj Rajkumar Kanhed

*/
#include<stdio.h>
void DisplayConvert(char cValue)
{
	if(cValue>='A' && cValue<='Z' )
	{
		printf("%c",cValue)
	}
	else if(cValue>='a' && cValue<='z') 
	{
			printf("%c",cValue)
	}
	
}
