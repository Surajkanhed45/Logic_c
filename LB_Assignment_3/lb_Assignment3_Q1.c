//write a program which accept one number from user and print that number of even number on screen
/*
START
	get function to print even i.e PrintEven()
		Accept one number from user in variable ivalue.
		get another variable i that is a number from 1 to ivalue
		if number is even then display
END

Input:    Enter the number:7
Output:   2   4   6   8   10   12   14
*/

#include"Header3_Q1.h"
int main()
{

int ivalue=0;
printf("Enter the number:");
scanf("%d",&ivalue);

PrintEven(ivalue);
}
