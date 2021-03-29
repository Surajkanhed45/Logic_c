


#include<stdio.h>
#include<stdlib.h>

int EvenCount(int Arr[],int iLength)
{
	int i=0,iCnt=0;
	
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
	int *p=NULL;
	int iSize=0,i=0,iRet=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -1;
	}
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	
	iRet=EvenCount(p,iSize);
	printf("Number of Even element in array is:%d",iRet);
	free(p);
	return 0;
}