/*
function name= To display Number 
input=integer
output=integer
descreption=print Number 5 to 1 (5 4 3 2 1)
date=24/02/2021
Author=Suraj Rajkumar Kanhed

*/
#include<stdio.h>
#include<stdbool.h>


bool chkVowel(char ichar)
{
	if((ichar=='a')|| (ichar=='i')||(ichar=='o')||(ichar=='u')||(ichar=='e')||(ichar=='A')||(ichar=='I') || (ichar=='O')||(ichar=='U') || ichar=='E')
	{
		return true;
	}
	else
	{
		return false;
	}
}