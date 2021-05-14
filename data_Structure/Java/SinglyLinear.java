//Implimentation of Singly Linear linked list in JAVA

import java.util.*;

class node
{
	int Data;
	node Next;
	public node(int iValue)
	{
		Data=iValue;
		Next=null;
	}
}
class SinglyLL
{
	node Head;
	public SinglyLL()
	{
		Head=null;
	}
	public void InsertFirst(int iValue)
	{
		node Newn=new node(iValue);
		
		if(Head==null)
		{
			Head=Newn;
		}
		else
		{
			Newn.Next=Head;
			Head=Newn;
		}
	}
	public void InsertLast(int iValue)
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
			Newn.Next=null;
		}
	}
	public void InsertAtPos(int iValue,int iPos)
	{
		int iSize=Count();
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
			node temp=Head;
			node Newn=new node(iValue);
			for(int i=1;i<iPos-1;i++)
			{
				temp=temp.Next;
			}
			Newn.Next=temp.Next;
			temp.Next=Newn;
		}
	}
	public void DeleteFirst()
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
		}
	}
	public void DeleteLast()
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
			node temp=Head;
			while(temp.Next.Next!=null)
			{
				temp=temp.Next;
			}
			temp.Next=null;
		}
	}
	public void DeleteAtPos(int iPos)
	{
		int iSize=Count();
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
			node temp=Head;
			for(int i=1;i<iPos-1;i++)
			{
				temp=temp.Next;
			}
			temp.Next=temp.Next.Next;
		}
	}
	public int Count()
	{
		node temp=Head;
		int iCnt=0;
		while(temp!=null)
		{
			iCnt++;
			temp=temp.Next;
		}
		return iCnt;
	}
	public void Display()
	{
		node temp=Head;
		while(temp!=null)
		{
			System.out.print("|"+temp.Data+"|->");
			temp=temp.Next;
		}
		
		System.out.print("null\n");
	}
	
}

class SinglyLinear
{
	public static void main(String args[])
	{
		SinglyLL obj=new SinglyLL();
		Scanner sc=new Scanner(System.in);
		int iChoice=1,iRet=0,iPos=0,iValue=0;
		
		while(iChoice!=0)
		{
			System.out.println("Enter the choice:");
			
			System.out.println("1 : Insert First");
			System.out.println("2 : Insert Last");
			System.out.println("3 : Insert At Position");
			System.out.println("4 : Delete First");
			System.out.println("5 : Delete Last");
			System.out.println("6 : Delete At Position");
			System.out.println("7 : Display LL");
			System.out.println("8 : Count elment in LL");
			System.out.println("0 : Exit the application");
			iChoice=sc.nextInt();
			
			switch(iChoice)
			{
				case 1:
				System.out.println("Enter the Element:");
				iValue=sc.nextInt();
				obj.InsertFirst(iValue);
				break;
				
				case 2:
				System.out.println("Enter the Element:");
				iValue=sc.nextInt();
				obj.InsertLast(iValue);
				break;
				
				case 3:
				System.out.println("Enter the Position:");
				iPos=sc.nextInt();
				System.out.println("Enter the Element:");
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
				System.out.println("Enter the position:");
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
				System.out.println("Thank you for using Linked list application");
				break;
				
				default:
				System.out.println("Please Enter valid choice number.");
				break;
				
			}
			
		}
	}
}