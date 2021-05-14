
class Demo
{
	public static void Display(Integer arr[])
	{
		System.out.println ("Element of array are:");
		for(int i : arr)//for each loop
		{
			System.out.println (i);
		}
	}
		public static <T> void DisplayX(T arr[])
	{
		System.out.println ("Element of array are:");
		for(T i : arr)
		{
			System.out.println (arr[i]);
		}
	}
}
class Generic
{
	public static void main (String[] args) {
		Integer a[]={10,20,30,40,50};
		float b[]={10.2f,20.3f,30.5f,40.6f,50.2f};
		Character c[]={'a','b','c','d'};
		Demo.DisplayX(a);
		Demo.DisplayX(b);
		Demo.DisplayX(c);	
}
}