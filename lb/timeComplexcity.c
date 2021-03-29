//Accept one from user and display the factor of that number
/*
Enter any number:12
1       2       3       4       6       
*/
//Complexcity:(How much time loop will be itterate)
//1)time Complexity(How much time)
//2)Space Complexity


#include<stdio.h>

void factor(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{iNo=-iNo;}
	//Time Complexcity : O(N/2) -> (Order of N)
	for(iCnt=1;iCnt<=iNo/2;iCnt++)
	{
		if(iNo%iCnt==0)
		{
			printf("%d\t",iCnt);
		}
	}
}

int main()
{
	int iValue=0;
	printf("Enter any number:");
	scanf("%d",&iValue);
	
	factor(iValue);
	
	return 0;
}