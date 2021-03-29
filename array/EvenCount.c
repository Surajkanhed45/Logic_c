/*Accept N numeber from user and enter that number of element in the array 
and return the frequency of even element i array  */

#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[],int iLength)
{
	int i=0;
	int iCnt=0;
	if(Arr==NULL)
	{
		return -1;
	}
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
		iCnt++;
		}
	}
	return iCnt;
}
int main()
{
	int *arr=NULL;
	int iSize=0,i=0;
	int iRet=0;
	
	printf("Enter number of Element:");
	scanf("%d",&iSize);
	
	arr=(int*)malloc(iSize*sizeof(int));
	
	if(arr==NULL)
	{
		printf("Unable to allocate the memory");
		return -1;
	}
	printf("Enter Element:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	iRet=EvenCount(arr,iSize);
	printf("Frequency of Even element in array is:%d\n",iRet);
	free(arr);
	
	return 0;
}