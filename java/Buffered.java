
import java.io.*;

class Buffered
{
	public static void main(String args[])throws IOException
	{
		InputStreamReader iobj=new InputStreamReader(System.in);
		BufferedReader br=new BufferedReader(iobj);
		
		
		System.out.println ("Enter number:");
		int no=Integer.parseInt(br.readLine());
		System.out.println ("Number is:"+no);
		
	}
}