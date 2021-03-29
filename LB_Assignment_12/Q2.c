 /*
 Accept number of rows and number of column and display the below  output.
 
Input : Enter number of rows and column:4 4

Output: A       B       C       D
		a       b       c       d
		A       B       C       D
		a       b       c       d
 
 */
 #include<stdio.h>
 typedef unsigned int UINT;
 void Pattern(UINT iRow,UINT iCol)
 {
	 int i=0,j=0;
	 char ch='\0';
	 for(i=1;i<=iRow;i++)
	 {
		 if(i%2==0)
		 {
			 ch='a';
		 }
		 else
		 //if(i%2==1)
		 {
			 ch='A';
		 }
		 for(j=1;j<=iCol;j++)
		 {
			 printf("%c\t",ch);
			 ch++;
		 }
		 printf("\n");
	 }
 }
 int main()
 {
	 UINT iValue1=0,iValue2=0;
	 printf("Enter number of rows and column:");
	 scanf("%lu%lu",&iValue1,&iValue2);
	 
	 Pattern(iValue1,iValue2);
	 
	 return 0;
 }