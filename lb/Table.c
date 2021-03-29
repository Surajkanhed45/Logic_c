//Accept one number from user and display the table of that number




#include<stdio.h>
void table(int iNum)
{
	if(iNum<0)
	{
		iNum=-iNum;
	}
	for (int i=1;i<=10;i++)
	{
		
		printf("%d\n",iNum*i);
	}
}
int main()
{
	int iValue=0;
	printf("Enter the number:");
	scanf("%d",&iValue);
	
	table(iValue);
	return 0;
	
}