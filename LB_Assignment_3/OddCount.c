//Accept number from user and get that number of array element and display the odd number element in that array.

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	int i=0;
	if(Arr==NULL)
	{
		return -1;
	}
	printf("Odd number of element in array:");
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			printf("%d",Arr[i]);
		}
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,i=0;
	
	printf("Enter How many element you want to enter the array:");
	scanf("%d",iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	printf("Enter array element:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	Display(ptr,iSize);
	free(ptr);
	
	
	
	return 0;
}