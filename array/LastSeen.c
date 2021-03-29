#include<stdio.h>
#include<stdlib.h>

int FirstOccur(int Arr[],int iLength,int iValue)
{
	int i=0;
	int iCnt=0;
	if(Arr==NULL)
	{
		return -2;
	}
	for(i=iLength-1;i>=0;i--)
	{
		if(Arr[i]==iValue)
		{
		break;
		}
	}
	return i;
}
int main()
{
	int *arr=NULL;
	int iSize=0,iNum=0,i=0;
	int iRet=0;
	
	printf("Enter number of Element:");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize*sizeof(int));
	
	if(arr==NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}
	printf("Enter Element:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter element that you want to search:");
	scanf("%d",&iNum);
	
	iRet=FirstOccur(arr,iSize,iNum);
	if(iRet==-1)
	{
		printf("Element Not Found");
	}
	else
	{
	printf("index is:%d\n",iRet);
	}
	free(arr);
	
	return 0;
}