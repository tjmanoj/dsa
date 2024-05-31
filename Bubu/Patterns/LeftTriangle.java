import java.util.Scanner;
class LeftTriangle{
    public static void main(String[] args) {
       int i,j,k;
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       for(i=1;i<=n;i++)
       {
           for(j=(n-i);j>=1;j--)
           {
               System.out.print("  ");
           }
           for(k=1;k<=i;k++)
           {
               System.out.print("* ");
           }
           System.out.println();
       }
    }
}
/*
For a given no.of rows 'n' print left traingle pattern
Input n=7
Output
            *
          * * 
        * * * 
      * * * * 
    * * * * * 
  * * * * * * 
* * * * * * * 
Input n=5

Output
        *
      * * 
    * * * 
  * * * * 
* * * * *


*/
