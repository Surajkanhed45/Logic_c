



interface math1
{
	int Add(int no1,int no2);
}
interface math2 extends math1
{
	int Sub(int no1,int no2);
}
class Demo implements math2
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

class InterDemo2
{
	public static void main(String args[])
	{
    Demo obj=new Demo();
    System.out.println ("Addition is :"+obj.Add(10,5));
    System.out.println ("Substraction is :"+obj.Sub(15,10));
	}
}