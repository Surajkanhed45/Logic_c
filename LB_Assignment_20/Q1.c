//Accept N number from user and return the maximum number from all that number.
#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
	int i=0,iMax=0;
	Arr[0]=iMax;
	for(i=0;i<iLength;i++)
	{
		if(iMax<Arr[i])
		{
			iMax=Arr[i];
		}
	}
	return iMax;	
}
int main()
{
	int *ptr=NULL;
	int iSize=0,i=0,iRet=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=Maximum(ptr,iSize);
	printf("Maximum is:%d",iRet);
	
	free(ptr);
	
	
	return 0;
	
}