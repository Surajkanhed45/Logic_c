import java.lang.*;

class base
{
	public void fun(){System.out.println("Inside fun");}
	public final void gun(){System.out.println("Inside final gun");}
}
class derived extends base
{
	public void fun(){}
	//public void gun(){}  //(Not Allowed becouse gun is final method in the base class) 
}
class FinalMethod
{
	public static void main(String args[])
	{
		derived dobj=new derived();
		dobj.fun();
		dobj.gun();
		
	}
}