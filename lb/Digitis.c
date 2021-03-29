//Accept number from user and display the digits of that number seperatally in reverse order
//input:7521
//output:  1
//         2
//         5
//   	   7	 

#include<stdio.h>

void Display(int iNo)
{
	int iDigit=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}
int main()
{
	int iValue=0;
	printf("Enter one number:");
	scanf("%d",&iValue);
	Display(iValue);
	return 0;
}



