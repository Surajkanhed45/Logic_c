import java.lang.*;

class Piyush
{
	public static void main(String pp[])
	{
    Area obj=new Area();
	int ret=obj.circle();
	 System.out.println(ret);
	ret=obj.tri();
	 System.out.println(ret);
	ret=obj.square();
	 System.out.println(ret);
	ret=obj.rectangle();
	 System.out.println(ret);
	}
}
class Area
{
	double area;
	public void circle()
	{
	 int r=2;
	 area=3.14*r*r;
	 System.out.println("Area of circle:",area);
	 
	}
	public void tri()
	{
	 int h=4,ba=8;
	 area=0.5*h*ba;
	 System.out.println("Area of triangle:",area);
	 
	}
	public void square()
	{
	 int s=5;
	 area=s*s;
	 System.out.println("Area of square:",area);
	 
	}
	public void rectangle()
	{
	 int l=7,b=10;
	 area=l*b;
	 System.out.println("Area of rectangle:",area);
	 
	}	
}
