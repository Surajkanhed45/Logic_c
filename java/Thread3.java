/*Thread priority:
					thread priority is consider as an impotance givan to the specific thread.
					In case of java thread priority are in numeric format (from 1 to 10).
					Default priority of a thread is 5 we can get the priority of the current thread
					by calling getPriority() method and we can set the priority by using setPriority ()
					method.
					
Example:					
*/
class Demo extends Thread
{
	public void run()
	{
		System.out.println ("Priority of thread is:"+Thread.currentThread().getPriority());
	}
}
class Thread3
{
	public static void main (String[] args) {
		System.out.println ("Inside main function");
		Thread t=new Thread(new Demo());
		
		t.setPriority(Thread.MIN_PRIORITY);
		System.out.println (t.getPriority());
		
		t.setPriority(Thread.NORM_PRIORITY);
		System.out.println(t.getPriority());
		
		t.setPriority(Thread.MAX_PRIORITY);
		System.out.println(t.getPriority());
			
			t.start();
}
}