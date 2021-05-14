//Accept number form user and display all number till that number
//input

import java.lang.*;
import java.util.Scanner;

class Itteration
{
	public static void main(String args[])
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("please Enter number:");
		int no=sc.nextInt();
		int icnt=0;
		
		
		for(icnt=1;icnt<=no;icnt++)
		{
			System.out.println(icnt);
		}
		System.out.println("While loop");
		
		 icnt=0;
		while(icnt<=no)
		{
			System.out.println(icnt);
			icnt++;
		}
		System.out.println("do-While loop");
		
		 icnt=1;
		do
		{
			System.out.println(icnt);
			icnt++;
		}while(icnt<=no);
		
		
		
	}
}