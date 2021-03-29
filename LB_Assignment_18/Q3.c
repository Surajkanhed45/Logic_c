

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckContain(int Arr[],int iLength)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
		{
			iCnt++;
		}
	}
	if(iCnt>0)
	{
		return true;
	}
	else 
	{
		return false;
	}
}

int main()
{
	int *p=NULL;
	int iSize=0,i=0,bRet=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	
	bRet=CheckContain(p,iSize);
	if(bRet==true)
	{
		printf(" 11 is present in this array");
	}
	else
	{
		printf(" 11 is not present in this array");
	}
	free(p);
	return 0;
}