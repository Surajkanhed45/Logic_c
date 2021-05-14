//
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

class SinglyCL
{
	node Head;
	node Teil;
	int iSize;
	
	public SinglyCL()
	{
		Head=null;
		Teil=null;
		iSize=0;
	}
	int Count()
	{
		return iSize;
	}
	void Display()
	{
		node temp=Head;
		for(int i=1;i<=iSize;i++)
		{
			System.out.print("|"+temp.Data+"|->");
			temp=temp.Next;
		}
		System.out.println("null\n");
	}
	void InsertFirst(int iValue)
	{
		node Newn=new node(iValue);
		if((Head==null)&&(Teil==null))
		{
			Head=Newn;
			Teil=Newn;
		}
		else
		{
			Newn.Next=Head;
			Head=Newn;
		}
		iSize++;
		Teil.Next=Head;
	}
	void InsertLast(int iValue)
	{
		node Newn=new node(iValue);
		if(Head==null)
		{
			Head=Newn;
			Teil=Newn;
		}
		else
		{
			node temp=Head;
			Teil.Next=Newn;
			Teil=Teil.Next;
			Teil.Next=Head;
		}
		iSize++;
	}
	void InsertAtPos(int iValue,int iPos)
	{
		if((iPos<1)||(iPos>iSize+1))
		{
			System.out.println("Position Not Found.");
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
			node Newn=new node(iValue);
			node temp=Head;
			for(int i=1;i<iSize-1;i++)
			{
				temp=temp.Next;
			}
			Newn.Next=temp.Next;
			temp.Next=Newn;
		}
		iSize++;
	}
	void DeleteFirst()
	{
		if(iSize==0)
		{
			return;
		}
		else if(iSize==1)
		{
			Head=null;
			Teil=null;
		}
		else
		{
			Head=Head.Next;
			Teil.Next=Head;
		}
		iSize--;
	}
	void DeleteLast()
	{
		if(iSize==0)
		{
			return;
		}
		else if(iSize==1)
		{
			Head=null;
			Teil=null;
		}
		else
		{
			node temp=Head;
			for(int i=1;i<iSize-1;i++)
			{
				temp=temp.Next;
			}
			temp.Next=Head;
		}
		iSize--;
	}
	void DeleteAtPos(int iPos)
	{
		if((iPos<1)||(iPos>iSize))
		{
			System.out.println("Position Not Found.");
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
			for(int i=1;i<iSize-1;i++)
			{
				temp=temp.Next;
			}
			temp.Next=temp.Next.Next;
		}
		iSize--;
	}
	
}



class SinglyLinear
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		SinglyCL obj=new SinglyCL();
		int iChoice=1,iValue=0,iPos=0,iRet=0;
		
		while(iChoice!=0)
		{
			System.out.println("Enter the choice:");
			System.out.println("1 : Insert First");
			System.out.println("2 : Insert Last");
			System.out.println("3 : Insert At Position");
			System.out.println("4 : Delete First");
			System.out.println("5 : Delete Last");
			System.out.println("6 : Delete At Position");
			System.out.println("7 : Display Element in LL");
			System.out.println("8 : Count of Element in LL");
			System.out.println("0 : Exit the LL Application");
			
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
				System.out.println("Enter the position:");
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
				System.out.println("Enter the position:");
				iPos=sc.nextInt();
				obj.DeleteAtPos(iPos);
				break;
				
				case 7:
				obj.Display();
				break;
				
				case 8:
				iRet=obj.Count();
				System.out.println("Count of Element in LL:"+iRet);
				break;
				
				case 0:
				System.out.println("Thank you for using LL Application");
				break;
				
				default:
				System.out.println("Please enter valid choice");
				break;
			}
		}
		
	}
}