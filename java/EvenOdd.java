//Wap to find out the given number is positive negetive or zero
import java.lang.*;
import java.util.*;
class EvenOdd
{
	public static void main(String arg[])
	{
		Scanner sc=new Scanner(System.in);
		int number;
		System.out.println("Enter a number:");
		number=sc.nextInt();
		
		
		if(number%2==0)
		{
			System.out.println(number+" is Even Number.");
		}
		else if(number%2==1)
		{
			System.out.println(number+" is Odd Number.");
		}
		
		
	}
}