//Program to Accept one number from user if number is less than 10 then print "Hello" otherwise print "Demo"
/*
START
	get function to display our output i.e Dispaly()
	get one variable for loop i.e int i=0
		 if number is less than 10 then print "Hello"
		 else
		 print "Demo"		
END
*/
#include"Header2_Q3.h"
int main()
{
	int iNo=0;
	printf("Enter a number:");
	scanf("%d",&iNo);
	
	Display(iNo);
	return 0;
}
