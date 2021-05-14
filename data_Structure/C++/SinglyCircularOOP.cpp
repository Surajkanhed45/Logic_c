//
#include<iostream>
using namespace std;

typedef struct node
{
	int Data;
	struct node *Next;
}NODE,*PNODE;

class SinglyCL
{
	private:
	PNODE Head;
	PNODE Teil;
	int iSize;
	public:
	SinglyCL()
	{
		Head=NULL;
		Teil=NULL;
		iSize=0;
	}
	int Count()
	{
		return iSize;
		
	}
	void Display()
	{
		int i=0;
		PNODE temp=Head;
		for(i=1;i<=iSize;i++) //we can use also do while loop
		{
			cout<<"|"<<temp->Data<<"|->";
			temp=temp->Next;
		}
		cout<<"NULL\n";
	}
	void InsertFirst(int iNo)
	{
		PNODE Newn=NULL;
		Newn=new NODE;
		Newn->Data=iNo;
		Newn->Next=NULL;
		
		if((Head==NULL)&&(Teil==NULL)) //LL is Empty
		{
			Head=Newn;
			Teil=Newn;
		}
		else //LL cointain atleast one node
		{
			Newn->Next=Head;
			Head=Newn;
		}
		iSize++;
		Teil->Next=Head;
		
	}
	void InsertLast(int iNo)
	{
		PNODE Newn=NULL;
		Newn=new NODE;
		Newn->Data=iNo;
		Newn->Next=NULL;
		
		if((Head==NULL)&&(Teil==NULL)) //LL is Empty
		{
			Head=Newn;
			Teil=Newn;
			
		}
		else //LL cointain atleast one node
		{
			Teil->Next=Newn;
			Teil=Teil->Next; //ail=Newn;
		}
		iSize++;
		Teil->Next=Head;
		
	}
	void DeleteFirst()
	{
		if((Head==NULL)||(Teil==NULL))//LL is Empty
		{
			return;
		}
		else if(Head==Teil) //one node
		{
			delete(Head);
			Head=NULL;
			Teil=NULL;
			iSize--;
		}
		else//More than one node
		{
			Head=Head->Next;
			delete(Teil->Next);
			Teil->Next=Head;
			iSize--;
			
		}
	}
	void DeleteLast()
	{
		if((Head==NULL)||(Teil==NULL))  //(iSize==0)
		{
			return;
		}
		else if(Head==Teil)  //(iSize==1)
		{
			delete(Head);
			Head=NULL;
			Teil=NULL;
			iSize--;
		}
		else
		{
			PNODE temp=Head;
			int i=0;
			for(i=1;i<iSize-1;i++)
			{
				temp=temp->Next;
			}
			delete(temp->Next);
			Teil=temp;
			Teil->Next=Head;
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
		}	
	}
};
int main()
{
	SinglyCL obj;
	int iChoice=1,iRet=0,iPos=0,iValue=0;
	
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
			obj.InsertAtPosition(iValue,iPos);
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
			obj.DeleteAtPosition(iPos);
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
		}//End of switch
	}// End of while
	
	return 0;
}//End of main


















