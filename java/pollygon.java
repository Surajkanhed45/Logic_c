import java.lang.*;
import java.util.*;

class pollygon
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner (System.in);
		
	    int r,h,ba,s,l,b;
		double area;
		System.out.println("Enter radius of circle:");
	    r=sc.nextInt();
		area=3.14*r*r;
		System.out.println("Area of circle:"+area);
		
	   
	    System.out.println("Enter height of tringle : ");
	    h=sc.nextInt();
	    System.out.println("Enter the base of tringle : ");
	    ba=sc.nextInt();
	    area=0.5*h*ba;
	    System.out.println("Area of triangle : "+area);
	    
	    System.out.println("Enter the side of square : ");
	    s=sc.nextInt();
	    area=s*s;
	    System.out.println("Area of square:"+area);
	    
	    System.out.println("Enter the length of rectangle : ");
	    l=sc.nextInt();
	    System.out.println("Enter the breadth of rectangle:");
	    b=sc.nextInt();
	    area=l*b;
	    System.out.println("Area of rectangle:"+area);
	}
}