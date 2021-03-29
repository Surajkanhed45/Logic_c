//Write a program which accept a N number from user and return first occour.
#include<stdio.h>
#include<stdlib.h>

int FirstOccur(int *arr,int iLength,int iNo)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if(arr[i]==iNo)
		{
			break;
		}
	}
	if(i==iLength)
	{
		return -1;
	}
	else
	{
		return i;
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,i=0,iNum=0,iRet=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	
	ptr=(int*)calloc(iSize,sizeof(int ));
	
	printf("Enter the number of element in the array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter the element that you want to search:");
	scanf("%d",&iNum);
	
	iRet=FirstOccur(ptr,iSize,iNum);
	if(iRet==-1)
	{
		printf("Element not found");
	}
	else
	{
	printf("Index is:%d",iRet);
	}
	
	free(ptr);
	
	return 0;
}