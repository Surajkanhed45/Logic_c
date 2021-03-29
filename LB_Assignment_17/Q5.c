

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int i=0;
	
	printf("Array element which are multiple of 11 is :\n");
	
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%11==0)
		{
		printf("%d\n",Arr[i]);
		}
	}
}

int main()
{
	int *p=NULL;
	int iSize=0,i=0;
	
	printf("Enter the size of array:");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	
	Display(p,iSize);
	free(p);
	return 0;
}