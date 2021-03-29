//

#include<stdio.h>
#include<stdlib.h>

int LastOccur(int Arr[],int iLength,int iNo)
{
	int i=0;
	for(i=iLength-1;i>=0;i--)
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
	int *p=NULL;
	int iSize=0,i=0,iRet=0,iNum=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	if(p==NULL)
	{
		printf("Unable to allocate memory");
		return -2;
	}
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Enter number that you want to search:");
	scanf("%d",&iNum);
	
	iRet=LastOccur(p,iSize,iNum);
	printf("Last occourence index is:%d",iRet);
	
	free(p);
	
	return 0;
}