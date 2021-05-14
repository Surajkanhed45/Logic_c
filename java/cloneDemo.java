

class Employee implements Cloneable
{
	public int id;
	public String name;
	
	public Employee(int x,String str)
	{
		this.id=x;
		this.name=str;
		
	}
	protected Object clone() throws CloneNotSupportedException
	{
		return super.clone();
	}
}
class cloneDemo
{
	public static void main (String[] args) throws Exception
 {
	Employee obj1=new Employee(11,"Piyush");
	Employee obj2=(Employee)obj1.clone();
	System.out.println ("Employee id :"+obj2.id);
	System.out.println ("Employee name:"+obj2.name);
}
}