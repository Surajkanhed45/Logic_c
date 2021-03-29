
//Accept number from user and get that number of array element and return the diffrence between summation of even element and odd element in array.

#include<stdio.h>
#include<stdlib.h>

int Display(int Arr[],int iLength)
{
	int i=0;
	int Esum=0,Osum=0;
	if(Arr==NULL)
	{
      return -1;
	}
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			Esum=Esum+Arr[i];
		}
		else
		{
			Osum=Osum+Arr[i];
		}
	}
	return Esum-Osum;
}
int main()
{
	int *ptr=NULL;
	int iSize=0,i=0,iRet=0;
	
	printf("Enter How many element you want to enter the array:");
	scanf("%d",&iSize);
	
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
	iRet=Display(ptr,iSize);
	printf("Diffferenec is:%d",iRet);
	free(ptr);
	
	
	
	return 0;
}