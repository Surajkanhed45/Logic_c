
class String1
{
	public static void main(String arg[])
	{
		String s1="Hello";
		String s2=new String("Hello");//dynamacally memory allocation
		char arr[]={'H','e','l','l','o'};
		String s3=new String(arr);
		
		String s4="Hello";
		//jvm check that string is available or not in the string litral(constant) pool
		String s5=new String("Hello");//memory on heap section
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
	}
}