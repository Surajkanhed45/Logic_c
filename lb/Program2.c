
//Accept two number from user return minimum and maximum number
/*
Algoritham for maximum
START
	accept first number as no1
	accept second number as no2

	if no1 is greater than no2 then no1 is maximum
	otherwies 
	no2 is maximun
STOP
*/
#include"Header2.h"    //user defined Header file
int main()
{
	int iNo1=0;
	int iNo2=0;
	
	printf("Enter first number:");
	scanf("%d",&iNo1);
	printf("Enter second number:");
	scanf("%d",&iNo2);
	
    int	iRet=Maximum( iNo1, iNo2);
	printf("Maximum number is :%d\n",iRet);
	
	int imet=Minimum( iNo1, iNo2);
	printf("Minimum number is :%d\n",imet);
	
	
	
	return 0;
}