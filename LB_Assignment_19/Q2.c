

#include<stdio.h>
#include<stdlib.h>

int Index(int Arr[],int iLength,int iNo)
{
	int i=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==iNo)
		{
			break;
		}
	}	
	if(i==iLength)
	{
		return -1;
	}
	else
	{
		return i;
	}
}

int main()
{
	int *ptr=NULL;
	int iSize=0,i=0,iRet=0,iNum=0;
	
	printf("Enter size of array:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Unable to allocate the memory");
		return -2;
	}

	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("Enter number that want you search:");
	scanf("%d",&iNum);
	
	iRet=Index(ptr,iSize,iNum);
	printf("Index is:%d",iRet);
	
	free(ptr);
	
	return 0;
}