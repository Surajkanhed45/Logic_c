

//Accept N number from user and accept another number from user and check whether that number is present or not in N number.

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckIt(int Arr[],int iLength,int iValue)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iValue)
		{
			break;
		}
	}
	if(i==iLength)
	{
		return FALSE;
	}
	else
	{
		return TRUE;
	}
}
int main()
{
	int *ptr=0;
	int iSize=0,iNum=0,i=0;
	BOOL bRet=FALSE;
	
	printf("Enter size of array:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		print("Unable to allocate memory");
		return -1;
	}
	printf("Enter Element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter number that you want to search:");
	scanf("%d",&iNum);
	
	bRet=CheckIt(ptr,iSize,iNum);
	if(bRet==TRUE)
	{
		printf("%d Element is present in the this array.",iNum);
	}
	else
	{
		printf("%d Element is not Present in this array.",iNum);
	}
	
	free(ptr);
	
	return 0;
}
