//concept of jagged array 
/*jagged array is an multidiamenssional array which contains fixed number of rows and variable
Number of  colums */

import java.lang.*;
import java.util.Scanner;

class Jagged_Array
{
	public static void main(String srgs[])
	{
		Scanner sc=new Scanner(System.in);
		
		int arr[][]=new int[4][];
		arr[0]=new int[2];
		arr[1]=new int[1];
		arr[2]=new int[3];
		arr[3]=new int[1];
		System.out.println("Enter the element of array arr:");
		
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				arr[i][j]=sc.nextInt();
			}
		}
		System.out.println("Element of array arr is :");
		for(int i=0;i<arr.length;i++)
		{
			for(int j=0;j<arr[i].length;j++)
			{
				System.out.println(arr[i][j]);
			}
		}
		System.out.println("Size of array arr is :"+arr.length);
	}
}
//Loop to travel for this kind of jagged array is same as two diamenssion array.