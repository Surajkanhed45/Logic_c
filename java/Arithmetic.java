import java.lang.*;

class Arithmetic
{
	public static void main(String xyz[])
	{
		Arith obj1=new Arith();
		Arith obj2=new Arith(50,20);
		
		int ret=obj2.addition();
		System.out.println(ret);
		
		ret=obj2.substraction();
		System.out.println(ret);
		
	}
	
}
class Arith
{
	public int no1;
	public int no2;
	
	public Arith()
	{
		System.out.println("Inside default constructor\n");
		no1=0;
		no2=0;
	}
	public Arith(int x,int y)
	{
		System.out.println("Inside parameterized constuctor");
		no1=x;
		no2=y;
	}
	public int addition()
	{
		int ans=0;
		ans=no1+no2;
		return ans;
	}
		public int substraction()
	{
		int ans=0;
		ans=no1-no2;
		return ans;
	}
}
