import java.lang.*;

class base
{
	public int i,j;
	base()
	{
		System.out.println("Inside constructor");
	}
	public void gun()
	{
		System.out.println("Inside gun");
	}
	
}
class derived extends base   //single level inherited class
{
	public int x,y;
	derived()
	{
		System.out.println("Inside derived constructor");
	}
	public void fun()
	{
		System.out.println("Inside fun");
	}
	
}
class derived2 extends derived //multi level inheritance
{
	public int a;
	derived2()
	{
		System.out.println("Inside derived2 constuctor");
	}
	public void sun()
	{
		System.out.println("Inside derived2 sun");
	}
}
class Inheritance
{
	public static void main(String arg[])
	{
		base bobj=new base();
		bobj.gun();
		derived dobj=new derived();
		dobj.fun();
		dobj.gun();
		derived2 d=new derived2();
		d.gun();
		d.fun();
		d.sun();
		
	}
}