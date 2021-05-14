class Str1
{
	public static void main(String arg[])
	{
		String s1="Hello";
		String s2="Hello";
		String s3=new String("Hello");
		String s4=new String("HELLO");
		if(s1==s2)
		{
			System.out.println ("S1 and s2 are equals");
		}
		if(s1==s3)
		{
			System.out.println ("s1 and s3 are equals");
		}
		if(s1.equals(s3))
		{
			System.out.println ("s1 and s3 are equals using equals method");
		}
		if (s1.equalsIgnoreCase(s4)){
			System.out.println ("s1 and  s4 are equal");
		}
	}
}