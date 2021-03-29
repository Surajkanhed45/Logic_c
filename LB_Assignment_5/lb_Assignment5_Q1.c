//write a program which accept one number from user and display the multiplication of that all factor .
/*
START
	get function to print Addition of facto2r i.e MutiFactor()
		Accept one number from user in variable ivalue.
		get another variable i that is a number from 1 to ivalue
		if number is factor of 2 then add that number then multiply that number with all another factor.
END

Input:    Enter the number:122
Output:   144 (1*2*3*4*6)
*/

#include"Header4_Q1.h"
int main()
{

int ivalue=0;
printf("Enter the number:");
scanf("%d",&ivalue);


MultiFactor(ivalue);

}
