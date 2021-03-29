//Write a program which is accept a number from user and print non factor of that number
/*
START
	get DisplayFactor method do display Even factor only of any number that is accepted by user
		Accept one value from user
		In our method gives some condition
			if value is dividee by 1 to upto value gives reminder zero means means that number(i) is factor of value 
			also if number(i) is devided by i and gives remainder (non zero).
			then print on the console
			and printed Numbers(i) becomes a non factor of value(variable)  
END
*/
/*Enter any number:12
 5 7 8 9 10 11
 
 Enter any number:13
 2 3 4 5 6 7 8 9 10 11 12
*/
#include"Header4_Q3.h"
int main()
{
	int value=0;
	printf("Enter any number:");
	scanf("%d",&value);
	
  
	DisplayEvenFactor(value);
	return 0;
}
