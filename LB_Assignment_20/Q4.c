//Accept N number and display that Number which contain 3 digits.
#include<stdio.h>
#include<stdlib.h>

void CountDigit(int Arr[],int iLength)
{
	int i=0,iDigit=0,iCnt=0,iTemp=0;
	for(i=0;i<iLength;i++)
	{
	iCnt=0;	
	iTemp=Arr[i];
	while(iTemp>0)
	{
		iDigit=iTemp%10;
		iTemp=iTemp/10;
		iCnt++;
	}
	if(iCnt==3)
	{
		printf("Number that contain 3 digit is:%d\n",Arr[i]);
	}
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
		printf("Unable to allocate memory");
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