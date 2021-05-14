
import java.util.*;
class Exception2
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.println("Inside main");
		int arr[]={10,20,30,40,50};
		System.out.println("Array created succesfully");
		System.out.println ("Enter the index number:");
		int index=sc.nextInt();
		
		try{
		
		System.out.println("Array element at specified index is:"+arr[index]);
		System.out.println("End of main");
		}
		catch(ArrayIndexOutOfBoundsException obj)
		{
			System.out.println ("Exception occours : Inside catch");
			System.out.println ("Information of exception is:"+obj);
		}
		finally
		{
			System.out.println ("Inside finally block");
		}
		System.out.println ("End of main");
	}
}