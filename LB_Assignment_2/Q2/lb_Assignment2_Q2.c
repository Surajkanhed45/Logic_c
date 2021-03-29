//Accept one number from user and print the number of star(*).
/*
Algoritham
START
	get function to display our output i.e Accept()
	get one variable for loop i.e int iCnt=0
		print Number of star(*) using for loop with the conditions
	continue		
END
*/
#include"Header2_Q2.h"
int main()
{
	int iValue=0;
	printf("Enter a Number:");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
	
	
}