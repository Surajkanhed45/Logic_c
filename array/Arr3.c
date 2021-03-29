

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[],int iSize)
{
	int i=0;
	if((Arr==NULL) ||(iSize<=0))
	{
		return;
	}
	printf("Even Element are:");
	for(i=0;i<iSize;i++)
	{
		if(Arr[i]%2==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *arr=NULL;
	int iLength=0,i=0;
	
	printf("Enter how many number of element in the array:");
	scanf("%d",&iLength);
	
	arr=(int*)malloc(iLength*sizeof(int));
	
	if(arr==NULL)
	{
		printf("Unable to allocate the memory");
		return 0;
	}
	
	printf("Enter Element:");
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	DisplayEven(arr,iLength);
	free(arr);
	
	return 0;
	
}