/*
Accept number from user and display the bellow pattern.
1)
Enter number:-9
A       B       C       D       E       F       G       H       I

2)
Enter number:28
Please Enter number from 1 to 26
*/

#include<stdio.h>
void Pattern(int iNo)
{
	int iCnt=0;
	char ch='\0';
	ch='A';
	if(iNo<0)
	{
		iNo=-iNo;
	}
	if(iNo<1 || iNo>26)
	{
		printf("Please Enter number in between 1 to 26");
		return;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%c\t",ch);
		ch++;
	}
}
int main()
{
	int iValue=0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	
}