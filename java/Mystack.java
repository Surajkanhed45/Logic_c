import java.util.*;
class Mystack
{
	public static void main(String arg[])
	{
		Stack<Float> sobj=new Stack<Float>();
		sobj.push(11.4f);
		sobj.push(21.5f);
		sobj.push(51.7f);
		System.out.println("Size is:"+sobj.size());
		System.out.println("element of stack:"+sobj);
		System.out.println("Removed element is :"+sobj.pop());
		System.out.println("Size is:"+sobj);
		System.out.println("Size is:"+sobj.size());
		System.out.println ("Last element:"+sobj.peek());
		if(sobj.empty())
		{
			System.out.println("stack is empty");
		}
		else{
			System.out.println("Stack is not empty");
		}
	}
}