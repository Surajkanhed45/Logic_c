/*Accept size of the array from the user and get the element of that array and display such element which are even and divisialble by 5*/

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
	int i=0;
	printf("Even Element of array that is divisiable by 5 :\n");
	for(i=0;i<iLength;i++)
	{
		if(Arr[i]%2==0 && Arr[i]%5==0)
		{
			printf("%d\n",Arr[i]);
		}
	}
}
int main()
{
	int *ptr=NULL;
	int iSize=0,i=0;
	printf("Enter how many number you want to enter in the array:");
	scanf("%d",&iSize);
	
	ptr=(int*)malloc(iSize*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate memory:");
		return -1;
	}
	
	printf("Enter the element of array:");
	for(i=0;i<iSize;i++)
	{
		scanf("%d",&ptr[i]);

	}
	Display(ptr,iSize);
	free(ptr);
	
	return 0;
}