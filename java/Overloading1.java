

import java.lang.*;

class Demo{
	public int add(int no1,int no2)
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}
	public int add(int no1,int no2,int no3)
	{
		int ans=0;
		ans=no1+no2+no3;
		return ans;
	}
	public float add(float no1,float no2)
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}
	public void  fun(int no1,double no2)
	{
		System.out.println("inside fun");
	}
	public void add(double no1,int no2)
	{
		System.out.println("Inside fun");
	}
}
class Overloading1
{
	public static void main(String args[])
	{
		Demo obj=new Demo();
		obj.add(11,22);
		obj.add(10,20,30);
		obj.add(5.7f,6.5f);
		obj.fun(7,9.7);
		obj.fun(8.7,5);
	}
}