import java.util.*;
class Myvector
{
	public static void main(String args[])
	{
		//size of 10 element
		Vector<Character> obj1=new Vector <Character>();
		//size of 20 element
			Vector<Character> obj2=new Vector <Character>(20);
	   //size of 20 element
			Vector<Character> obj3=new Vector <Character>(20,10);	
		obj3.add('A');
		obj3.add('B');
		obj3.add('C');
		System.out.println("Size is:"+obj3.size());
		System.out.println("capacity:"+obj1.capacity());
		System.out.println("capacity:"+obj3.capacity());
		for(int i=0;i<obj3.size();i++)
		{
			System.out.println(obj3.get(i));
		}
		obj3.clear();
	}
}