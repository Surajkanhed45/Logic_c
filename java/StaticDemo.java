import java.lang.*;

class Demo
{
	public int x,y;        //non ststic characteristic
	public static int z;  //static characterictic
	
	public void fun()      //non static behaviour
	{
		System.out.println ("Inside fun");
	}
	public static void gun() //static behaviour
	{
		System.out.println("Inside gun");
		//System.out.println("value of x is "+ this.x); //Not allowed
	}
}
class StaticDemo
{
	public static void main(String args[])
	{
		System.out.println ("value of z is "+Demo.z);
		Demo.gun();
		
		Demo obj=new Demo();
		
	}
}