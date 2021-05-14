class Marvellous{
	synchronized public void Display(String str)
	{
		System.out.print("{"+str);
		try{
			Thread.sleep(1000);
		}
		catch (Exception obj)
		{
	
		}
		System.out.println ("}");
	}
}
class Demo extends Thread
{
	String message;
	Marvellous obj;//Composition(if we create object of one class as characteristic of another class)
	public Demo(Marvellous ref,String s)
	{
		this.obj=ref;
		this.message=s;
	}
	public void run()
	{
		obj.Display(message);
	}
}


class Synchronization2
{
	public static void main (String[] args) throws Exception{
		Marvellous mobj=new Marvellous();
		Demo obj1=new Demo(mobj,"PrePlacement1");
		Demo obj2=new Demo(mobj,"PrePlacement2");
		Demo obj3=new Demo(mobj,"PrePlacement3");
		obj1.start();
		obj2.start();
		obj3.start();	
	
		
	}
}