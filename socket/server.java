//server.java

import java.io.*;
import java.net.*;

class server
{
	public static void main(String args[]) throws Exception
	{
		System.out.println("Server is running...\n\n");
		
		ServerSocket ss=new ServerSocket(2101);
		
		Socket s=ss.accept();
		
		System.out.println("Connection is succesfully establish...");
		
		PrintStream ps=new PrintStream(s.getOutputStream());
		
		BufferedReader br1=new BufferedReader(new InputStreamReader(s.getInputStream()));
		
		BufferedReader br2=new BufferedReader(new InputStreamReader(System.in));
		
		String str1,str2;
		
		while(true)
		{
			while((str1=br1.readLine())!=null)
			{
				System.out.println(str1);
				str2=br2.readLine();
				ps.println(str2);
			}
			ps.close();
			ss.close();
			s.close();
			br1.close();
		}
	}
}