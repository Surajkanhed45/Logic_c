//
#include<iostream>
using namespace std;

typedef struct node
{
	int Data;
	struct node *Next;
	struct node *prev;
}NODE,*PNODE;

class DoublyCL
{
	private:
	PNODE Head;
	PNODE Teil;
	int iSize;
	public:
	DoublyCL()
	{
		Head=NULL;
		Teil=NULL;
		iSize=0;
	}
	void InsertFirst(int);
	void InsertLast(int);
	void InsertAtPos(int,int);
	void DeleteFirst();
	void DeleteLast();
	void DeleteAtPos(int);
	void Display();
	int Count();
	
};
	int DoublyCL::Count()
	{
		return iSize;
	}
	void DoublyCL::Display()
	{
		PNODE temp=Head;
		for(int i=1;i<=iSize;i++)
		{
			cout<<"|"<<temp->Data<<"|->";
			temp=temp->Next;
		}
		cout<<"NULL\n";
	}
	void DoublyCL::InsertFirst(int iValue)
	{
		PNODE Newn=NULL;
		Newn=new NODE;
		Newn->Data=iValue;
		Newn->Next=NULL;
		Newn->prev=NULL;
		if((Head==NULL)&&(Teil==NULL))  //if(iSize==0)
		{
			Head=Newn;
			Teil=Newn;
			
		}
		else       
		{
			Newn->Next=Head;
			Head->prev=Newn;
			Head=Newn;
			
		}
		Teil->Next=Head;
		Head->prev=Teil;
		iSize++;
	}
	void DoublyCL::InsertLast(int iValue)
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
			Teil=Newn;
		}
		else
		{
			Teil->Next=Newn;
			Newn->prev=Teil;
			Teil=Teil->Next;
			
		}
		Teil->Next=Head;
		Head->prev=Teil;
		iSize++;
	}
		
	
	void DoublyCL::InsertAtPos(int iValue,int iPos)
	{
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
			
			PNODE temp=Head;
			for(int i=1;i<iSize-1;i++)
			{
				temp=temp->Next;
			}
			Newn->Next=temp->Next;
			temp->Next->prev=Newn;
			temp->Next=Newn;
			Newn->prev=temp;
			iSize++;
		}
	}
	void DoublyCL::DeleteFirst()
	{
		if(iSize==0)
		{
			return;
		}
		if(iSize==1)
		{
			delete(Head);
			Head=NULL;
			Teil=NULL;
			iSize=0;
		}
		else
		{
			Head=Head->Next;
			delete(Head->prev);
			Teil->Next=Head;
			Head->prev=Teil;
			iSize--;
		}
		
		
	}
	void DoublyCL::DeleteLast()
	{
		if(iSize==0)
		{
			return;
		}
		if(iSize==1)
		{
			delete(Teil);
			Head=NULL;
			Teil=NULL;
			iSize=0;
		}
		else
		{
			Teil=Teil->prev;
			delete(Teil->Next);
			Teil->Next=Head;
			Head->prev=Teil;
			iSize--;
		}
		
	}
	void DoublyCL::DeleteAtPos(int iPos)
	{
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
			PNODE temp=Head;
			for(int i=1;i<iPos-1;i++)
			{
				temp=temp->Next;
			}
			temp->Next=temp->Next->Next;
			delete(temp->Next->prev);
			temp->Next->prev=temp;
			iSize--;
		}
		
	}
int main()
{
	DoublyCL obj;
	int iChoice=1,iPos=0,iRet=0,iValue=0;
	
	while(iChoice!=0)
	{
		cout<<"Enter your choice\n";
		cout<<"1: Insert first"<<"\n";
		cout<<"2: Insert last"<<"\n";
		cout<<"3: Insert at position"<<"\n";
		cout<<"4: Delete first"<<"\n";
		cout<<"5: Delete last"<<"\n";
		cout<<"6: Delete at position"<<"\n";
		cout<<"7: Display element in LL"<<"\n";
		cout<<"8: count Element in the LL"<<"\n";
		cout<<"0: Exit the application"<<"\n";
		cin>>iChoice;
		
		switch(iChoice)
		{
			
			case 1:
			cout<<"Enter number\n";
			cin>>iValue;
			obj.InsertFirst(iValue);
			break;
			
			case 2:
			cout<<"Enter number\n";
			cin>>iValue;
			obj.InsertLast(iValue);
			break;
			
			case 3:
			cout<<"Enter number\n";
			cin>>iValue;
			cout<<"Enter position\n";
			cin>>iPos;
			obj.InsertAtPos(iValue,iPos);
			break;
			
			case 4:
			obj.DeleteFirst();
			break;
			
			case 5:
			obj.DeleteLast();
			break;
			
			case 6:
			cout<<"Enter position\n";
			cin>>iPos;
			obj.DeleteAtPos(iPos);
			break;
			
			case 7:
			obj.Display();
			break;
			
			case 8:
			iRet=obj.Count();
			cout<<"Count of element in LL:"<<iRet<<"\n";
			
			case 0:
			cout<<"Thank you for using the appliaction\n";
			break;
			
			default:
			cout<<"Please enter valid choice\n";
			break;
		}
	}
	
	return 0;
}