//
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int i=0;
	printf("Element of array which are divisiable of 3 & 5 :\n");
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%3==0 && Arr[i]%5==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *arr=NULL;
	int iSize=0,i=0;
	
	printf("Enter size number of array:");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize*sizeof(int));
	if(arr==NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}
	
	printf("Enter element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	Display(arr,iSize);
	free(arr);
	return 0;
}