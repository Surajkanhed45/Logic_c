
#include<stdio.h>
#include<stdlib.h>


int CheckContain(int Arr[],int iLength)
{
	int i=0;
	int iCnt=0;
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]==11)
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
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	
	iRet=CheckContain(p,iSize);
	printf("%d",iRet);
	
	free(p);
	return 0;
}