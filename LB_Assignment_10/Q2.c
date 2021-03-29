/*Accept number from user and display the bellow Pattern.
1)Output:
Enter number:5
5       #       4       #       3       #       2       #       1       #

2)Output:
Enter number:-4
4       #       3       #       2       #       1       #
*/
#include<stdio.h>

void Pattern(int iNo)
{
	int iCnt=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t#\t",iCnt);
	}
}
int main()
{
	int iValue=0;
	printf("Enter number:");
	scanf("%d",&iValue);
	
	Pattern(iValue);
	return 0;
}

