//Program to print 5 to 1 number
/*
START
	get function to display our output i.e Dispaly()
	get one variable for loop i.e int i=0
		print our number in decending order using for loop with the conditions
	continue		
END
*/

typedef int BOOL;
#include"Header3_Q5.h"

int main()
{
	char cValue='\0';
	BOOL bRet=0;
	
	printf("Enter one character:");
	scanf("%c",cValue);
	
	bRet=chkVowel(cValue);
	
	if(bRet==true)
	{
		printf("%c It is vowel",cValue);
		
	}
	else
	{
		printf("%c It is not vowel",cValue);
	}
 
 
	return 0;
}
