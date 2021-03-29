//Accept number from user and display all number till that number And gets addition of that number.
//input:4
//output:1 2 3 4 
//Addition:10

//input:-5
//output:1 2 3 4 5 
//Addition:15			

/*
START
	Accept one number as no
	If number is negetive then convert it to positive
	Create one counter as cnt and set it to one 
	Iterate till the counter is lessthan or equal to the number
		print the value of counter on screen 
		Increment the value of counter by 1
		Addition of all that number we have to display on the screen
	continue
END	
*/
#include<stdio.h>
//Display function accepts one parameters as integer and return nothing
int Sum(int iNo)//conside input is = 5
{
	int iCnt=0;
	int iSum=0;
	
	if(iNo<0)//input updater
	{
		iNo=-iNo;
	}
	if (iNo==0)//input filter
	{
		return 0;//Jar input 0(Zero) dil tar function madhe jauch naka ,baher pada
		
	}
	printf("Display using for loop:\n");
	//     1       2        3
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\n",iCnt);//4
		iSum=iSum+iCnt; //iCnt value is added to sum variable in the loopping sequeance.(1+2+3+4+5)
	}
	
   return iSum;
	
}
//  1 ( 2 4 3) (2 4 3) (2 4 3) (2 4 3) (2 4 3) 2 STOP
//output: 1       2       3       4       5     
int main()//Entry points function 
{
	
	int iValue=0;
	int iRet=0;
	printf("Enter a number:");
	scanf("%d",&iValue);
	
	
	iRet=Sum(iValue);
	printf("Addition of all number:%d\n",iRet);
	
	return 0;
}