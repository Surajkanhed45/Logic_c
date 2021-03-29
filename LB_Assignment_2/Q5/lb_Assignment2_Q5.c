//program to display number is Even or Odd.
/*
START
	get function to check the condition i.e ACheckEven()
	get a number from user in the variable iValue.
		if reminder of that number after diveded by 2 is 0(Zero) then print number is even number.
		else
		print number is odd number.
			
END
*/

#include"Header2_Q5.h"
typedef int BOOL;
#define TRUE 1
#define FALSE 0
int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	
	printf("Enter a number:");
	scanf("%d",&iValue);
	bRet=CheckEven(iValue);
	if(bRet==TRUE)
	{
		printf("%d id even number",iValue);
	}
	else
	{
		printf("%d is odd number;",iValue);
	}
}

