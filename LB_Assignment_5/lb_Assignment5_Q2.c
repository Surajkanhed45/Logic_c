//Write a program which is accept a number from user and print even factor of that number in decending order.
/*
START
	get DisplayFactor method do display Even factor only of any number that is accepted by user
		Accept one value from user
		In our method gives some condition
			if value is dividee by 1 to upto value gives reminder zero means means that number(i) is factor of value 
			also if number(i) is devided by 2 and gives remainder 0(zero).
			then print on the console
			and printed Numbers(i) becomes a Even factor of value(variable) in decending order. 
END
*/
/*Enter any number:24
 12 6 4 3 2 1
*/
#include"Header4_Q2.h"
int main()
{
	int value=0;
	printf("Enter any number:");
	scanf("%d",&value);
	
  
	DisplayFactor(value);
	return 0;
}