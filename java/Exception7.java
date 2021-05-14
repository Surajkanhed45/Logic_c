////Program to demonst6rate the concept of user defind Exception.
////And how to handled user define Exception.

import java.util.*;//util package is use to import Scanner class

class AgeException extends Exception//Age Exception is a user defined Exception
{
	public AgeException(String str)//Age Exeption is a constructor. 
	{
		super(str);//super keyword is use to call parents class(Exception class)constructor.
	}
}
class Exception7 //main class
{
	public static void main (String[] args) {
		Scanner sc =new Scanner(System.in);//Scanner class is use to get input from user
									       //System.in is use to connect input device(keyboard)
		System.out.println ("Enter your age:");
		int age=sc.nextInt();
		try{
			if(age<18)
			{
				AgeException aobj=new AgeException("Age is less than 18");//object creation of AgeException class
				throw aobj;
			}
		}
			catch(AgeException obj)//Object is created by the user to catch the Exception that is throw by JVM
			{
			System.out.println ("Exception ouccured "+obj);
			}
		}
}
/*Input->Enter your age:17
 Output->Exception ouccured AgeException: Age is less than 18
*/
