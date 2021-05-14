class Demo extends Thread
{

public void run()
{
	for(int i=0;i<1000;i++)
	{
	System.out.println("Inside thread:"+Thread.currentThread().getName()+": "+i);
	try
	{
		Thread.sleep(1000);
		
	}
	catch (Exception obj){}
	}
}
}
class Thread2
{
	public static void main(String arg[])
	{
		System.out.println ("Inside main thread");
		Demo obj1=new Demo();
		Demo obj2=new Demo();
		Thread t1=new Thread(obj1);
		Thread t2=new Thread(obj2);
		t1.setName("First");
		t2.setName("Second");
		t1.start();
		t2.start();
		System.out.println ("End of main Thread");
		
	}
}