

#include<stdio.h>
#include<stdlib.h>
void Display(int Arr[],int iSize)
{
	int i=0;
	printf("Elements from the array:\n");
	for(i=0;i<iSize;i++)
	{
		printf("%d\n",Arr[i]);
	}
}
int main()
{
	int *arr=NULL;   //step1
	int iLength=0;
	int i=0;
	printf("Enter the number of element:");
	scanf("%d",&iLength);  //step2
	
	arr=(int*)malloc(iLength*sizeof(int)); //step3
	
	printf("Enter the element:");   //step4
	for(i=0;i<iLength;i++)
	{
		scanf("%d",&arr[i]);
	}
	Display(arr,iLength);   //step 5
	free(arr);
	
	
	return 0;
}