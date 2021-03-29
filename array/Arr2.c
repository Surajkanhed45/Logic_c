

#include<stdio.h>
#include<stdlib.h>

void Display(int arr[],int iLength)
{
	int i=0;
	printf("Element from the array is:\n");
	for(i=0;i<iLength;i++)
	{
		printf("%d\n",arr[i]);
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0;
	int i=0;
	
	printf("Enter number of element:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter element:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	Display(ptr,iSize);
	free(ptr);
	
	return 0;
}