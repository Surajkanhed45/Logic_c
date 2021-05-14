

class Demo
{
	public int i;
	public int j;
	public Demo(int x,int y)
	{
		this.i=x;
		this.j=y;
	}
}
class ObjectClass
{
	public static void main(String args[])
	{
	Demo obj1=new Demo(11,21);
	Demo obj2=new Demo(11,21);
	Demo obj3=new Demo(11,21);
	if(obj1==obj2)
	{
		System.out.println("Objects are equals");
	}
	System.out.println ("Hashcode of obj1 is:"+obj1.hashCode());
	System.out.println ("Hashcode of obj1 is:"+obj2.hashCode());
	System.out.println ("Hashcode of obj1 is:"+obj3.hashCode());
	
	
	
	
	
	}
}