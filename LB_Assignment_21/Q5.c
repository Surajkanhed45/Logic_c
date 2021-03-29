/*Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)*/


#include<stdio.h>

void ShowTime(char ch)
{
	if(ch>='A' && ch<='D')
	{
	if(ch=='A')
	{
		printf("Your exam at 7 AM ");
	}
	else if (ch=='B')
	{
		printf("Your Exam at 8:30 AM ");
	}
	else if(ch=='C')
	{
		printf("Your exam at 9:20 AM ");
	}
	else if(ch=='D')
	{
		printf("Your exam at 10:30 AM ");
	}
	}
	else
	{
		printf("Invalide Division");
		return; 
	}
}
int main()
{
	char ch;
	int iRet=0;
	
	printf("Enter Division:");
	scanf("%c",&ch);
	
	ShowTime(ch);
	
	
	return 0;
}