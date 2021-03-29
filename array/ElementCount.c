//Acccept array size from user and accept one element from user and count frequency of that number in that aaray

#include<stdio.h>
#include<stdlib.h>

int ElementCount(int Arr[],int iLength,int iValue)
{
	int i=0;
	int iCnt=0;
	if(Arr==NULL)
	{
		return -1;
	}
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iValue)
		{
		iCnt++;
		}
	}
	return iCnt;
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
	
	iRet=ElementCount(arr,iSize,iNum);
	printf("Frequency that element in array is:%d\n",iRet);
	free(arr);
	
	return 0;
}