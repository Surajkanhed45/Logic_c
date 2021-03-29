
#include<stdio.h>

void Pattern(unsigned int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf(" * ");
	}
}

int main()
{
	unsigned int iValue=0; 	//you can do here typedef concept
	printf("\n");
	printf("Enter number:");
	scanf("%lu",&iValue);
	printf("\n");
	Pattern(iValue);
	
	
	return 0;
	
}