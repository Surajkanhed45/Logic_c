
abstract class Area
{
	public float radius;
	public Area(float no)
	{
		radius=no;
	}
	
	public abstract float calcArea(); //abstract method
	public void Display() //concrete method
	{
		System.out.println ("Radius is:"+radius);
	}
}

class calculation extends Area  //Area(value) in c++
{
	public calculation (float value)
	{
		super(value); //call the parent class constructor
	}
	public float calcArea() //concrete method
	{
		return 3.14f*radius*radius;
	}
}
class AbtsractDemo
{
	public static void main(String args[])
	{
		//Area obj=new Area(3.5f);  object creation is not allowed for abstract class
		calculation obj=new calculation(3.5f);
		float ret=obj.calcArea();
		System.out.println ("Area of circle:"+ret);
	}
}