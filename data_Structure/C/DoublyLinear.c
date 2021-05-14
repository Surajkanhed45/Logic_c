//DoublyLinear

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node *Next;
	struct node *prev;  //+
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head,int No)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Data=No;
	Newn->Next=NULL;
	Newn->prev=NULL;  //+
	
	if(*Head==NULL) //linked is empty
	{
		*Head=Newn;
	}
	else  // linked list containes atleast one node
	{
		Newn->Next=*Head;
		(*Head)->prev=Newn;  //+
		*Head=Newn;
	}
}
void InsertLast(PPNODE Head,int No)
{
	PNODE Newn=NULL;
	PNODE temp=*Head;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Data=No;
	Newn->Next=NULL;
	Newn->prev=NULL;  //+
	
	if(*Head==NULL) //linked is empty
	{
		*Head=Newn;
	}
	else  // linked list containes atleast one node
	{
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}
		temp->Next=Newn;
		Newn->prev=temp;
	}
}
void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|<=>",Head->Data);
		Head=Head->Next;
	}
	printf("NULL");
}
int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->Next;
	}
	return iCnt;
}
void DeleteFirst(PPNODE Head)
{
	if(*Head==NULL) //Empty LL
	{
		return;
	}
	else if((*Head)->Next==NULL) //Single node
	{
		free(*Head);
		*Head=NULL;
	}
	else  //More than one node
	{
		*Head=(*Head)->Next;
		free((*Head)->prev); //+
		(*Head)->prev=NULL; //+
	}
}
void DeleteLast(PPNODE Head)
{
	PNODE temp=*Head;
	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->Next==NULL)
	{
		free(*Head);
		*Head=NULL;
	}
	else
	{
		while(temp->Next->Next!=NULL)
		{
			temp=temp->Next;
		}
		free(temp->Next);
		temp->Next=NULL;
	}
}
void InsertAtPosition(PPNODE Head,int No,int iPos)
{
	int iSize=0,i=0;
	iSize=Count(*Head);
	if((iPos<1)||(iPos>iSize+1))
	{
		return ;
	}
	if(iPos==1)
	{
		InsertFirst(Head,No);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(Head,No);
	}
	else
	{
		PNODE temp=*Head;
		PNODE Newn=NULL;
		Newn=(PNODE)malloc(sizeof(NODE));
		Newn->Data=No;
		Newn->Next=NULL;
		Newn->prev=NULL;
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->Next;
		}
		Newn->Next=temp->Next;
		temp->Next->prev=Newn; //+
		temp->Next=Newn;
		Newn->prev=temp;  //+
		
	}
}
void DeleteAtPosition(PPNODE Head,int iPos)
{
	int iSize=0;
	iSize=Count(*Head);
	PNODE temp=*Head;
	int i=0;
	if((iPos<1)||(iPos>iSize))
	{
		return;
	}
	if(iPos==1)
	{
		DeleteFirst(Head);
	}
	else if(iPos==iSize)
	{
		DeleteLast(Head);
	}
	else
	{
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->Next;
		}
		temp->Next=temp->Next->Next;
		free(temp->Next->prev);
		temp->Next->prev=temp;
		
	}
	
}
int main()
{
	PNODE First=NULL;
	int iOption=1,iValue=0,iRet=0,iPos=0;
	
	while(iOption!=0)
	{
		printf("\n------------------------------------\n");
		printf("Please select the option\n");
		printf("1 :insert the node at first position\n");
		printf("2 :Insert the node at last position\n");
		printf("3 :Insert the node at give position\n");
		printf("4 :Delete the first node\n");
		printf("5 :Delete the last node\n");
		printf("6 :Delete the node at given position\n");
		printf("7 :Display the contains of linked list\n");
		printf("8 :count the node of linked list\n");
		printf("0 :Exit the application\n");
		scanf("%d",&iOption);
		printf("\n-------------------------------------\n");
		
		switch(iOption)
		{
			case 1:
			printf("Enter number to insert first:");
			scanf("%d",&iValue);
			InsertFirst(&First,iValue);
			break;
			
			case 2:
			printf("Enter number to insert last:\n");
			scanf("%d",&iValue);
			InsertLast(&First,iValue);
			break;
			
			case 3:
			printf("Enter the position:\n");
			scanf("%d",&iPos);
			printf("Enter data:\n");
			scanf("%d",&iValue);
			InsertAtPosition(&First,iValue,iPos);
			break;
			
			case 4:
			DeleteFirst(&First);
			break;
			
			case 5:
			DeleteLast(&First);
			break;
			
			case 6:
			printf("Enter the position of node to delete that node:");
			scanf("%d",&iPos);
			DeleteAtPosition(&First,iPos);
			break;
			
			case 7:
			printf("Content of the linked list\n");
			Display(First);
			break;
			
			case 8:
			iRet=Count(First);
			printf("count of node in liked list:%d",iRet);
			break;
			case 0:
			printf("Thank you for using linked list application\n");
			break;
			
			default:
			printf("Please enter valid option\n");
			break;
		}
		
	}
	
	
	return 0;
}//End of main