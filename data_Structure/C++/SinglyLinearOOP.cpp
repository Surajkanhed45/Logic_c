
using namespace std;
#include<iostream>
/*
struct node
{
	int Data;
	struct node *Next;
	
};
typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

*/

typedef struct node
{
	int Data;
	struct node *Next;
	
}NODE,*PNODE;

class SinglyLL
{
	private:
	PNODE Head;
	int iSize;
	public:
	SinglyLL()  //Default constructot
	{
		Head=NULL;
		iSize=0;
	}
	int Count()
	{
		return iSize; //time complexity 0(zero)
	}
	void Display()
	{
		PNODE temp=Head;
		while(temp!=NULL)
		{
			cout<<"|"<<temp->Data<<"|"<<"\t";
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
		
		if(Head==NULL) //LL is Empty
		{
			Head=Newn;
		}
		else //LL contains atleast one node
		{
			Newn->Next=Head;
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
		}
		iSize++;
	}
	void DeleteFirst()
	{
		/*
		if(Head==NULL)
		{
			return;
		}
		else
		{
			PNODE temp=Head;
			Head=Head->Next;
			delete temp;
			iSize--;
		}
		*/
		if(Head!=NULL)
		{
			PNODE temp=Head;
			Head=Head->Next;
			delete temp;
			iSize--;
		}
		
	}
	void DeleteLast()
	{
		if(Head==NULL)
		{
			return;
		}
		else if(Head->Next==NULL)
		{
			delete(Head);
			Head=NULL;
			iSize--;
		}
		else
		{
			PNODE temp=Head;
			while(temp->Next->Next!=NULL)
			{
				temp=temp->Next;
			}
			delete (temp->Next);
			temp->Next=NULL;
			iSize--;
		}
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
			
			for(i=1;i<iPos-1;i++)
			{
				temp=temp->Next;	
			}
			Newn->Next=temp->Next;
			temp->Next=Newn;
			iSize++;
		}
	}
	void DeleteAtPosition(int iPos)
	{
		PNODE temp=Head;
		PNODE target=NULL;
		int i=0;
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
			target=temp->Next;
			temp->Next=target->Next;
			delete(target);
			iSize--;
		}
	}
	
	
};

int main()
{
	int iChoice=1,iNo=0,iPos=0;
	SinglyLL obj1;
	while(iChoice!=0)
	{
		cout<<"Enter your choice:\n";
		cout<<"1: Insert at first node "<<"\n";
		cout<<"2: Insert at Last node"<<"\n";
		cout<<"3: Insert at given position"<<"\n";
		cout<<"4: Delete first node"<<"\n";
		cout<<"5: Delete Last node"<<"\n";
		cout<<"6: Delete at given position"<<"\n";
		cout<<"7: Display the content in LL"<<"\n";
		cout<<"8: Count the number of nodes"<<"\n";
		cout<<"0: Exit from application"<<"\n";
		cin>>iChoice;
		switch(iChoice)
		{
			case 1:
			cout<<"Enter number\n";
			cin>>iNo;
			obj1.InsertFirst(iNo);
			break;
			
			case 2:
			cout<<"Enter number insert last\n";
			cin>>iNo;
			obj1.InsertLast(iNo);
			break;
			
			case 3:
			cout<<"Enter the position \n";
			cin>>iPos;
			cout<<"Enter the element\n";
			cin>>iNo;
			obj1.InsertAtPosition(iNo,iPos);
			break;
			
			case 4:
			obj1.DeleteFirst();
			break;
			
			case 5:
			obj1.DeleteLast();
			break;
			
			case 6:
			cout<<"Enter the position\n";
			cin>>iPos;
			obj1.DeleteAtPosition(iPos);
			break;
			
			case 7:
			obj1.Display();
			break;
			
			case 8:
			iNo=obj1.Count();
			cout<<"Count of element are :"<<iNo<<"\n";
			break;
			
			case 0:
			cout<<"Thank you for using the application"<<"\n";
			break;
			
			default:
			cout<<"Please enter valid choice"<<"\n";
			break;
		}
	}
	return 0;
}