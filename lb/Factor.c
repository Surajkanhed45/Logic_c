//Accept one from user and display the factor of that number
/*
Enter any number:12
1       2       3       4       6       
*/



#include<stdio.h>

void factor(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{iNo=-iNo;}
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	factor(iValue);
	
	return 0;
}