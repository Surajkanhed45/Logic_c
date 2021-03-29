//Accept N number from user and accept another one number from user to check the frequency of that number in the array
#include<stdio.h>
#include<stdlib.h>

int CheckFrequency(int Arr[],int iLength,int iValue)
{
	int i=0,iCnt=0;
	if(Arr==NULL)
	{
		return -2;
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
	int *ptr=NULL;
	int iSize=0,iNum=0,i=0;
	int iRet=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter element:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter any number to find frquency of that number in array:");
	scanf("%d",&iNum);
	
	iRet=CheckFrequency(ptr,iSize,iNum);
	printf("Frequency of %d is:%d",iNum,iRet);
	
	free(ptr);
	
	return 0;
}