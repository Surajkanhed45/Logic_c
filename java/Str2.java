class Str2
{
	public static void main (String[] args) {
		String s1="ABC";
		String s2="Hello";
		String s3="world";
		System.out.println ("length:"+s1.length());
		String s4=s2+s3;
		System.out.println("Concatination:"+s4);
		
		char arr[]=s2.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			System.out.println(arr[i]);
		}
		char arr[]=s3.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			System.out.println (arr[i])
		}
		for(int i=0;i<s1.length();i++)
		{
			System.out.println (s1.charAt(i));
		}
		char arr[]=s1.toCharArray();
		for(int i=0;i<arr.length;i++)
		{
			System.out.println (arr[i]);
		}
		for(char ch:arr)//for each loop
		{
			System.out.println (ch);
		}
}
}