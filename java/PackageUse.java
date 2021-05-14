import marvellous.Arithmatic;  //user defined packages
import marvellous.Numbers;     
import marvellous.infosystem.Logic;


import java.lang.*;  //pre-defined packages

class PackageUse
{
	public static void main(String arg[])
	{
		Arithmatic aobj=new Arithmatic();
		Numbers nobj=new Numbers();
		Logic lobj=new Logic();
		
		int ret=aobj.Add(10,20);
		System.out.println("Addition:"+ret);
		ret=aobj.Sub(55,16);
		System.out.println("substraction:"+ret);
		ret=nobj.power(4,3);
		System.out.println("Power is:"+ret);
		
		ret=Math.addExact(4,3);
		System.out.println ("function math :"+ret);
		
		lobj.fun();
	}
}
