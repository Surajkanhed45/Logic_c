/*	Program to demonstrat the concept of throws keyword . 
	Program to calcuate the division of two number which is accepted from user
	When user divide one number to another number by Zero(0) then JVM gives the ArithmeticException
*/
import java.util.*;

class mathematic
{
	public int division(int no1,int no2)throws ArithmeticException 
	{						//We can use" Exception "only to handeled All type of Exception
		return no1/no2;
	}
}
class Exception6
{
	public static void main(String arg[])
	{
	Scanner sc=new Scanner(System.in);
	System.out.println ("Enter forst number:");
	int no1=sc.nextInt();
	System.out.println ("Enter second number:");
	int no2=sc.nextInt();
	int ret=0;
	mathematic mobj=new mathematic();  //mobj is a object of mathematic
	try
	{
	 ret=mobj.division(no1,no2);//calling the function by using object
	 System.out.println("Divition is:"+ret);	
	}
	catch(ArithmeticException obj)
	{
		System.out.println ("Exception occoured");
	}
		
	}
}