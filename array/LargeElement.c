
//Find largest Element in the array.
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int i=0;
	int iMax=0;
	if(Arr==NULL)
	{
		return -2;
	}
	iMax=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]>iMax)
		{
		iMax=Arr[i];
		}
	}
	return iMax;
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
	iRet=Maximum(arr,iSize);
	printf("Large Element:%d",iRet);
	free(arr);
	
	return 0;
}