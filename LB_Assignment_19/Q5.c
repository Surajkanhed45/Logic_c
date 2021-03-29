//

#include<stdio.h>
#include<stdlib.h>

int OddMult(int Arr[],int iLength)
{
	int i=0,iProduct=1;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==1)
		{
			iProduct=iProduct*Arr[i];
		}
	}
	return iProduct;
}
int main()
{
	int *ptr=NULL;
	int iSize=0,i=0,iRet=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	iRet=OddMult(ptr,iSize);
	printf("Product of odd element in the array is:%d",iRet);
	
	free(ptr);
	
	
	return 0;
}