//Accept one number from user and display the odd number up to that number.
//Input ->Enter number:17
//Output->1  3  5  7  9  11  13  15  17
#include<stdio.h>
void Display(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if(iCnt%2!=0)
		{
			printf("%d  ",iCnt);
		}
	}
}
int main()
{
	int iValue=0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
