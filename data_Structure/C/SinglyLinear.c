//Singly Linear linked list in c

#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node *Next;
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->",Head->Data);
		Head=Head->Next;
	}
	printf("NULL\n");
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
void InsertFirst(PPNODE Head,int iValue)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Data=iValue;
	Newn->Next=NULL;
	if(*Head==NULL)
	{
		*Head=Newn;
	}
	else
	{
		Newn->Next=*Head;
		*Head=Newn;
	}
}
void InsertLast(PPNODE Head,int iValue)
{
	PNODE Newn=NULL;
	Newn=(PNODE)malloc(sizeof(NODE));
	Newn->Data=iValue;
	Newn->Next=NULL;
	if(*Head==NULL)
	{
		*Head=Newn;
	}
	else
	{
		PNODE temp=*Head;
		while(temp->Next!=NULL)
		{
			temp=temp->Next;
		}
		temp->Next=Newn;
	}
}
void InsertAtPos(PPNODE Head,int iValue,int iPos)
{
	int iSize=0,i=0;
	iSize=Count(*Head);
	if((iPos<1)||(iPos>iSize+1))
	{
		printf("Position Not Found\n\n");
		return;
	}
	if(iPos==1)
	{
		InsertFirst(Head,iValue);
	}
	else if(iPos==iSize+1)
	{
		InsertLast(Head,iValue);
	}
	else
	{
		PNODE temp=*Head;
		PNODE Newn=NULL;
		Newn=(PNODE)malloc(sizeof(NODE));
		Newn->Data=iValue;
		Newn->Next=NULL;
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->Next;
		}
		Newn->Next=temp->Next;
		temp->Next=Newn;
	}
}
void DeleteFirst(PPNODE Head)
{
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
		PNODE temp=*Head;
		*Head=(*Head)->Next;
		free(temp);
	}
}
void DeleteLast(PPNODE Head)
{
	if(*Head==NULL)
	{
		return;
	}
	else if((*Head)->Next==NULL)
	{
		free(*Head);
		*Head==NULL;
	}
	else
	{
		PNODE temp=*Head;
		while(temp->Next->Next!=NULL)
		{
			temp=temp->Next;
		}
		free(temp->Next);
		temp->Next=NULL;
	}
}
void DeleteAtPos(PPNODE Head,int iPos)
{
	int iSize=0,i=0;
	iSize=Count(*Head);
	if((iPos<1)||(iPos>iSize))
	{
		printf("Position Not Found\n\n");
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
		PNODE target=NULL;
		PNODE temp=*Head;
		for(i=1;i<iPos-1;i++)
		{
			temp=temp->Next;
		}
		target=temp->Next;
		temp->Next=temp->Next->Next;
		free(target);
	}
	
}

int main()
{
	PNODE First=NULL;
	int iChoice=1,iValue=0,iPos=0,iRet=0;
	
	while(iChoice!=0)
	{
		printf("Enter the choice\n");
		printf("1 : Insert First\n");
		printf("2 : Insert Last\n");
		printf("3 : Insert At Position\n");
		printf("4 : Delete First\n");
		printf("6 : Delete Last\n");
		printf("7 : Delete At Position\n");
		printf("8 : Display element in LL\n");
		printf("9 : Count of element in LL\n");
		printf("0 : Exit the LL application\n");
		
		scanf("%d",&iChoice);
		
		switch(iChoice)
		{
			case 1:
			printf("Enter the number\n");
			scanf("%d",&iValue);
			InsertFirst(&First,iValue);
			break;
			
			case 2:
			printf("Enter the number\n");
			scanf("%d",&iValue);
			InsertLast(&First,iValue);
			break;
			
			case 3:
			printf("Enter the position\n");
			scanf("%d",&iPos);
			printf("Enter the number\n");
			scanf("%d",&iValue);
			InsertAtPos(&First,iValue,iPos);
			break;
			
			case 4:
			DeleteFirst(&First);
			break;
			
			case 5:
			DeleteLast(&First);
			break;
			
			case 6:
			printf("Enter the position\n");
			scanf("%d",&iPos);
			DeleteAtPos(&First,iPos);
			break;
			
			case 7:
			Display(First);
			break;
			
			case 8:
			iRet=Count(First);
			printf("Count of element in LL:%d\n",iRet);
			break;
			
			case 0:
			printf("Thank you for using LL application\n");
			break;
			
			default:
			printf("Please Enter Valid choice\n");
			break;
		}
	}
	
	
	return 0;
}