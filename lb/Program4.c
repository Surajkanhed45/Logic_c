//Accept number from user and display all number till that number
//input:8
//output:1 2 3 4 5 6 7 8
//input:-6
//output:1 2 3 4 5 6 

/*
START
	Accept one number as no
	If number is negetive then convert it to positive
	Create one counter as cnt and set it to one 
	Iterate till the counter is lessthan or equal to the number
		print the value of counter on screen 
		Increment the value of counter by 1
	continue
END	
*/
#include<stdio.h>
//Display function accepts one parameters as integer and return nothing
void Display(int iNo)//conside input is = 5
{
	int iCnt=0;
	if(iNo<0)//input updater
	{
		iNo=-iNo;
	}
	if (iNo==0)//input filter
	{
		return;//Jar input 0(Zero) dil tar function madhe jauch naka ,baher pada
		
	}
	printf("Display using for loop:\n");
	//     1       2        3
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);//4
	}
	printf("Display using while loop:\n");
	iCnt=1;
	while(iCnt<=iNo)
	{
		printf("%d\n",iCnt);
		iCnt++;
	}
}
//  1 ( 2 4 3) (2 4 3) (2 4 3) (2 4 3) (2 4 3) 2 STOP
//output: 1       2       3       4       5     
int main()//Entry points function 
{
	
	int iValue=0;
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	
	
	Display(iValue);
	
	
	return 0;
}