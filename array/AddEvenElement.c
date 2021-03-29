/*Accept N numeber from user and enter that number of element in the array 
and display the Addition of Even element */

#include<stdio.h>
#include<stdlib.h>

int AddEvenElement(int Arr[],int iLength)
{
	int i=0;
	int iSum=0;
	if(Arr==NULL)
	{
		return -1;
	}
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
		iSum=iSum+Arr[i];
		}
	}
	return iSum;
}
int main()
{
	int *arr=NULL;
	int iSize=0,i=0;
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
	iRet=AddEvenElement(arr,iSize);
	printf("Addition of array element:%d\n",iRet);
	free(arr);
	
	return 0;
}