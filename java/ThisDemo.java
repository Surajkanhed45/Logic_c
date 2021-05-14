import java.lang.*;

class Demo
{
	int x,y;
	public Demo()
	{
            System.out.println("Default constructor");
		
		
	}
        public Demo(int a,int b)
        {
            this();
            System.out.println("Parameterized constructor");
            this.x=a;
            this.y=b;
        }
        
	public void fun()
	{
		System.out.println("Value of x is :"+this.x);
	}
}
class ThisDemo
{
	public static void main(String arg[])
	{
		Demo obj1=new Demo();
		obj1.fun();
                Demo obj2=new Demo(11,21);
		
	}
}