//Implementation of Doubly Linear Linked list in java


import java.util.*;

class node 
{
	public int Data;
	node Next;
	node prev;
	public node(int iValue)
	{
		Data=iValue;
		Next=null;
		prev=null;
	}
}
class DoublyLL
{
	node Head;
	public DoublyLL()
	{
		Head=null;
	}
	void Display()
	{
		node temp=Head;
		while(temp!=null)
		{
			System.out.print("|"+temp.Data+"|->");
			temp=temp.Next;
		}
		System.out.println("null\n");
	}
	int Count()
	{
		int iCnt=0;
		node temp=Head;
		while(temp!=null)
		{
			iCnt++;
			temp=temp.Next;
		}
		return iCnt;
	}
	void InsertFirst(int iValue)
	{
		node Newn=new node(iValue);
		if(Head==null)
		{
			Head=Newn;
		}
		else
		{
			Newn.Next=Head;
			Head.prev=Newn;
			Head=Newn;
		}
	}
	void InsertLast(int iValue)
	{
		node Newn=new node(iValue);
		
		if(Head==null)
		{
			Head=Newn;
		}
		else
		{
			node temp=Head;
			while(temp.Next!=null)
			{
				temp=temp.Next;
			}
			temp.Next=Newn;
			Newn.prev=temp;
		}
	}
	void InsertAtPos(int iValue,int iPos)
	{
		int iSize=Count();
		if((iPos<1)||(iPos>iSize+1))
		{
			System.out.println("Index Note Found.");
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
			node temp=Head;
			node Newn=new node(iValue);
			for(int i=1;i<iPos-1;i++)
			{
				temp=temp.Next;
			}
			Newn.Next=temp.Next;
			temp.Next.prev=Newn;
			temp.Next=Newn;
			Newn.prev=temp;
		}
	}
	void DeleteFirst()
	{
		if(Head==null)
		{
			return;
		}
		else if(Head.Next==null)
		{
			Head=null;
		}
		else
		{
			Head=Head.Next;
			Head.prev=null;
		}
	}
	void DeleteLast()
	{
		if(Head==null)
		{
			return ;
		}
		else if(Head.Next==null)
		{
			Head=null;
		}
		else
		{
			node temp=Head;
			while(temp.Next.Next!=null)
			{
				temp=temp.Next;
			}
			temp.Next=null;
		}
	}
	void DeleteAtPos(int iPos)
	{
		int iSize=Count();
		if((iPos<1)||(iPos>iSize))
		{
			System.out.println("Index Not Found.");
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
			node temp=Head;
			for(int i=1;i<iPos-1;i++)
			{
				temp=temp.Next;
			}
			temp.Next=temp.Next.Next;
			temp.Next.prev=temp;
		}
	}
}//End of DoublyLL class
class DoublyLinear
{
	public static void main(String args[])
	{
		DoublyLL obj=new DoublyLL();
		Scanner sc=new Scanner(System.in);
		int iChoice=1,iRet=0,iPos=0,iValue=0;
		while(iChoice!=0)
		{
			System.out.println("Enter the choice:");
			System.out.println("1 : Insert Fisrt");
			System.out.println("2 : Insert Last");
			System.out.println("3 : Insert At Position");
			System.out.println("4 : Delete First");
			System.out.println("5 : Delete Last");
			System.out.println("6 : Delete At Position");
			System.out.println("7 : Display element in LL");
			System.out.println("8 : Count of element in LL");
			System.out.println("0 : Exit the LL application");
			
			iChoice=sc.nextInt();
			switch(iChoice)
			{
				case 1:
				System.out.println("Enter the element:");
				iValue=sc.nextInt();
				obj.InsertFirst(iValue);
				break;
				
				case 2:
				System.out.println("Enter the element:");
				iValue=sc.nextInt();
				obj.InsertLast(iValue);
				break;
				
				case 3:
				System.out.println("Enter the position");
				iPos=sc.nextInt();
				System.out.println("Enter the element:");
				iValue=sc.nextInt();
				obj.InsertAtPos(iValue,iPos);
				break;
				
				case 4:
				obj.DeleteFirst();
				break;
				
				case 5:
				obj.DeleteLast();
				break;
				
				case 6:
				System.out.println("Enter the element:");
				iPos=sc.nextInt();
				obj.DeleteAtPos(iPos);
				break;
				
				case 7:
				obj.Display();
				break;
				
				case 8:
				iRet=obj.Count();
				System.out.println("Count of element in LL:"+iRet);
				break;
				
				case 0:
				System.out.println("Thank you for using LL application");
				break;
				
				default:
				System.out.println("Enter valid Input\n");
				break;
			}
		}
		
		
		
			
	}
}













