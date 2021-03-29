//

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[],int iLength,int iNo1,int iNo2)
{
	int i=0;
	printf("Element that are in the range is:");
	for(i=0;i<=iLength;i++)
	{
		if(Arr[i]>=iNo1 && Arr[i]<=iNo2)
		{
		printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,i=0,iNum1=0,iNum2=0;
	
	printf("Enter the size of Array:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter the range that you want:");
	scanf("%d%d",&iNum1,&iNum2);
	
	DisplayRange(ptr,iSize,iNum1,iNum2);
	
	free(ptr);
	
	
	return 0;
}