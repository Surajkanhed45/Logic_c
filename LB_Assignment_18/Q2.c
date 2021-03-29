

#include<stdio.h>
#include<stdlib.h>

int Diffrence(int Arr[],int iLength)
{
	int i=0;
	int eCnt=0,oCnt=0;

	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0)
		{
			eCnt++;
		}
		else
		{
			oCnt++;
		}
	}
	return eCnt-oCnt;
}

int main()
{
	int *p=NULL;
	int iSize=0,i=0,iRet=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	
	iRet=Diffrence(p,iSize);
	printf("Difference between Even count and Odd count:%d",iRet);
	free(p);
	return 0;
}