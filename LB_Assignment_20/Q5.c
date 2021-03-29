//Accept N number from user and display the summation of digit of all that number.
#include<stdio.h>
#include<stdlib.h>

void CountDigit(int Arr[],int iLength)
{
	int i=0,iDigit=0,iSum=0,iTemp=0;
	for(i=0;i<iLength;i++)
	{
	iTemp=Arr[i];	
	iSum=0;
	while(Arr[i]>0)
	{
		iDigit=Arr[i]%10;
		iSum=iSum+iDigit;
		Arr[i]=Arr[i]/10;
	}
		printf("Summation of digit of %d is:%d\n",iTemp,iSum);

	}
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
	
	CountDigit(ptr,iSize);
	
	free(ptr);
	
	
	return 0;
	
}