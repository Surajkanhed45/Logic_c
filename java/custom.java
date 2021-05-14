import java.util.*;

class student
{
	public String Name;
	public int marks;
	public student(String str,int no)
	{
		this.Name=str;
		this.marks=no;
		
	}
	public void Display()
	{
		System.out.println ("Name= "+this.Name+"Marks :"+this.marks);
	}
	
}
class custom
{
	public static void main (String[] args) {
		LinkedList <student> ll=new LinkedList<student>();
		ll.add(new student("Piyush",56));
		ll.add(new student("Piyush",56));
		ll.add(new student("Piyush",56));
		System.out.println ("Linked list:"+ll);
		System.out.println ("Size of linkedlist is :"+ll.size());
		student ref=null;
		Iterator iobj=ll.iterator();
		System.out.println("Containts of linkedlist are :");
		while (iobj.hasNext())//hasNest->True_OR_False
		{
			ref=(student)iobj.next();
			ref.Display();
		}	
			ll.clear();
		
		
		
		
}
}