import java.lang.*;

class base
{
	public int i,j;
	base()
	{
		System.out.println("Inside constructor");
	}
	public void fun()
	{System.out.println("Inside fun");}
	public void gun()
	{System.out.println("Inside gun");}
}
class derived extends base   //single level inherited class
{
	public int x,y;
	derived()
	{
		System.out.println("Inside derived constructor");
	}
	public void fun()
	{System.out.println("Inside fun");}	
	public void sun()
	{System.out.println("Inside fun");}
	
}

class virtual
{
	public static void main(String arg[])
	{
    base bobj=new derived(); //upcasting
	//derived d=new base(); //downcasting
	bobj.fun();
	bobj.gun();
	//bobj.sun();(Not allowed becouse sun is not present in base class that is refering class)
   		
	}
}