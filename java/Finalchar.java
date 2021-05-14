import java.lang.*;

class demo
{ 
public int i;
public final int j=20;
public final int k;

demo()
{
	this.i=10;
	this.k=500;
	
}
}

class Finalchar
{
	public static void main(String args[])
	{
		demo d=new demo();
	    obj.i++;
		//obj.j++;  Not Allowed becouse j is final variable
		//obj.k++;  Not Allowed becouse k is final variable 
	}
}