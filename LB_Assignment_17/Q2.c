//


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int i=0;
	printf("Array Element which are divisiable by 5 is:\n");
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%5==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *p =NULL;
	int iSize=0,i=0;
	
	printf("Enter how many number of element you want to enter in array:");
	scanf("%d",&iSize);
	
	p=(int*)malloc(iSize*sizeof(int));
	
	printf("Enter Element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&p[i]);
	}
	
	Display(p,iSize);
	
	free(p);
	
	return 0;
	
}