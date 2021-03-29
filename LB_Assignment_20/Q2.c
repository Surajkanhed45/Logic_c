//Accept N number from user and return the Mininum number from all that number.
#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iLength)
{
	int i=0,iMin=0;
	iMin=Arr[0];
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]<iMin)
		{
			iMin=Arr[i];
		}
	}
	return iMin;	
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
		printf("Unabal to allocate the memory ")
		return -1;
	}
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=Minimum(ptr,iSize);
	printf("Minimum is:%d",iRet);
	
	free(ptr);
	
	
	return 0;
	
}