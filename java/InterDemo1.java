

interface math1
{
	int Add(int no1,int no2);
}
interface math2
{
	int Sub(int no1,int no2);
}
class Demo1 implements math1,math2
{
 public int Add(int no1,int no2)
 {
 	return no1-no2;
 }	
 	public int Sub(int no1,int no2)
 	{
 		return no1-no2;
 	}
}

class InterDemo1
{
	public static void main(String args[])
	{

    Demo1 obj=new Demo1();
    System.out.println ("Addition is :"+obj.Add(10,5));
    System.out.println ("Substraction is :"+obj.Sub(15,10));
	}
}