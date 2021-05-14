// Doubly Linked List using object orientation
using namespace std;
#include<iostream>

typedef struct node
{
	int Data;
	struct node *Next;
	struct node *prev;
}NODE,*PNODE;

class SinglyLL
{
	private:
	PNODE Head;
	int iSize;
	public:
	SinglyLL()
	{
		Head=NULL;
		iSize=0;
	}
	int Count()
	{
		return iSize;
	}
	void Display()
	{
		PNODE temp=Head;
		while(temp!=NULL)
		{
			cout<<"|"<<temp->Data<<"|"<<"->";
			temp=temp->Next;
		}
		cout<<"NULL\n";
	}
	void InsertFirst(int iValue)
	{
		PNODE Newn=NULL;
		Newn=new NODE;
		Newn->Data=iValue;
		Newn->Next=NULL;
		Newn->prev=NULL;
		if(Head==NULL)
		{
			Head=Newn;
		}
		else
		{
			Newn->Next=Head;
			Head->prev=Newn;
			Head=Newn;
		}
		iSize++;
	}
	void InsertLast(int iValue)
	{
		PNODE temp=Head;
		PNODE Newn=NULL;
		Newn=new NODE;
		Newn->Data=iValue;
		Newn->Next=NULL;
		Newn->prev=NULL;
		
		if(Head==NULL)
		{
			Head=Newn;
		}
		else
		{
			while(temp->Next!=NULL)
			{
				temp=temp->Next;
			}
			temp->Next=Newn;
			temp->Next->prev=temp;
		}
		iSize++;
		
	}
	void DeleteFirst()
	{
		if(Head==NULL)
		{
			return ;
		}
		else if(Head->Next==NULL)
		{
			delete(Head);
			Head=NULL;
		}
		else
		{
			Head=Head->Next;
			delete(Head->prev);			
			Head->prev=NULL;
		}
		iSize--;
	}
	void DeleteLast()
	{
		PNODE temp=Head;
		if(Head==NULL)
		{
			return;
		}
		else if(Head->Next==NULL)
		{
			delete(Head);
			Head=NULL;
		}
		else
		{
			while(temp->Next->Next!=NULL)
			{
				temp=temp->Next;
			}
			delete(temp->Next);
			temp->Next=NULL;
		}
		iSize--;
	}
	void InsertAtPosition(int iValue,int iPos)
	{
		PNODE temp=Head;
		int i=0;
		if((iPos<1)||(iPos>iSize+1))
		{
			return;
		}
		if(iPos==1)
		{
			InsertFirst(iValue);
		}
		else if(iPos==iSize+1)
		{
			InsertLast(iValue);
		}
		else
		{
			PNODE Newn=NULL;
			Newn=new NODE;
			Newn->Data=iValue;
			Newn->Next=NULL;
			Newn->prev=NULL;
			for(i=1;i<iPos-1;i++)
			{
				temp=temp->Next;
			}
			Newn->Next=temp->Next;
			temp->Next->prev=Newn;
			Newn->prev=temp;
			temp->Next=Newn;
			iSize++;
		}
	}
	void DeleteAtPosition(int iPos)
	{
		int i=0;
		PNODE temp=Head;
		if((iPos<1)||(iPos>iSize))
		{
			return;
		}
		if(iPos==1)
		{
			DeleteFirst();
		}
		else if(iPos==iSize)
		{
			DeleteLast();
		}
		else
		{
			for(i=1;i<iPos-1;i++)
			{
				temp=temp->Next;
			}
			temp->Next=temp->Next->Next;
			delete(temp->Next->prev);
			temp->Next->prev=temp;
			iSize--;
		}	
	}
};

int main()
{
	int iChoice=1,iNo=0,iPos=0;
	SinglyLL obj;
	
	while(iChoice!=0)
	{
		cout<<"Enter the choice\n";
		cout<<"1: Insert first node"<<"\n";
		cout<<"2: Insert last node"<<"\n";
		cout<<"3: Insert node at given position"<<"\n";
		cout<<"4: Delete first node"<<"\n";
		cout<<"5: Delete last node"<<"\n";
		cout<<"6: Delete node at given position"<<"\n";
		cout<<"7: Display element in LL"<<"\n";
		cout<<"8: count Element in the LL"<<"\n";
		cout<<"0: Exit the application"<<"\n";
		cin>>iChoice;
		
		switch(iChoice)
		{
			case 1:
			cout<<"Enter the element to insert first\n";
			cin>>iNo;
			obj.InsertFirst(iNo);
			break;
			
			case 2:
			cout<<"Enter the element to insert last\n";
			cin>>iNo;
			obj.InsertLast(iNo);
			break;
			
			case 3:
			cout<<"Enter the Position\n";
			cin>>iPos;
			cout<<"Enter the element\n";
			cin>>iNo;
			obj.InsertAtPosition(iNo,iPos);
			break;
			
			case 4:
			obj.DeleteFirst();
			break;
			
			case 5:
			obj.DeleteLast();
			break;
			
			case 6:
			cout<<"Enter the position to delete node\n";
			cin>>iPos;
			obj.DeleteAtPosition(iPos);
			break;
			
			case 7:
			obj.Display();
			break;
			
			case 8:
			iNo=obj.Count();
			cout<<"Count of element in LL is:"<<iNo<<"\n";
			break;
			
			case 0:
			cout<<"Thank you for using Linked List application\n";
			break;
			
			default:
			cout<<"Enter valid choice option\n";
			break;	
		}
	}
	return 0;
}