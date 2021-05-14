
//Interface specify what a class must do but not how
interface figures
{
	//All the characteristic of interface should be public, static and final
	public float PI=3.14f;
	//All Method/Behaver in interface ara by default public & abstract
	public float Area(float radius);
	public float circum(float radius);
	
}
class Circle implements figures  //in case of interface we have to use the impliments keyword
{
	public float Area(float radius)
	{
		return PI*radius*radius;
	}
	public float circum(float radius)
	{
		return 2*PI*radius;
	}
}

class InterDemo
{
	public static void main(String args[])
	{
		Circle obj=new Circle();
		System.out.println("Area is :"+obj.Area(10.5f));
		System.out.println("Circumfarence is:"+obj.circum(10.5f)); 
		System.out.println("Value of PI:"+figures.PI);//
	}
}