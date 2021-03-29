//Write a progaram which accept range number from user and dispaly even number between them.
/*
Input:
Enter first number:10
Enter second number:18
Output:
10  12  14  16  18
*/

#include<stdio.h>
void Display(int iNo1,int iNo2)
{
	int iCnt=0;
	if(iNo1<0)
	{
		iNo1=-iNo1;
	}
	if(iNo2<0)
	{
		iNo2=-iNo2;
	}

	for(iCnt=iNo1;iCnt<=iNo2;iCnt++)
	{
		if(iCnt%2==0)
		{
			printf("%d  ",iCnt);
		}
	}
}
int main()
{
	int iValue1=0,iValue2=0;
	printf("Enter first number:");
	scanf("%d",&iValue1);
	printf("Enter second number:");
	scanf ("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
	
}