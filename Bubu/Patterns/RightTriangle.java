import java.util.Scanner;
class RightTriangle{
    public static void main(String[] args) {
       int i,j,k;
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=i;j++)
           {
               System.out.print("*");
           }
           
           System.out.println();
       }
    }
}
/*
For a given no. of rows n;' print RightTriangle
Input:6
output:
*
**
***
****
*****
******
Inupt 3
*
**
***
*/
