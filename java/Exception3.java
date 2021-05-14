
import java.util.*;
class Exception3
{
	public static void main(String arg[])
	{
		System.out.println("Inside main");
		Scanner sc=new Scanner(System.in);
		int arr []={10,20,30,40,50};
		System.out.println("Array create successfully");
		System.out.println("Enter array index:");
		int index=sc.nextInt();
		try{
		
		System.out.println("Array index element is :"+arr[index]);
	
		}
		catch(Exception obj)
		{
			System.out.println ("Exception ouccered:"+obj);
		}
		finally
		{
			System.out.println ("Inside finally");
		}
		System.out.println ("End of main");	
		
	}
}