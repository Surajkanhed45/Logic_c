//nested loop example

import java.lang.*;
import java.util.Scanner;

class MultiDimmensition_Array
{
	 public static void main (String[] args) {
    
	/*
	 int arr[][]=new int[3][3];
    //arr is a multi dimenssion array which contains 3 one dimension array
    //each one dimenssion array contain 3 element and each element is of type integer.
    */
    int arr[][]={{1,2,3},{4,5,6},{7,8,9}};
    int i=0,j=0;
    
    for(i=0;i < arr.length;i++)  //To travel row
    {
    	for(j=0;j<arr[i].length;j++)//To travel colum
    	{
    		System.out.println(arr[i][j]);
    	}
    }
    
    
    }
}