/*Print hollw rectangle pattern for gn no of rows 'n' and no.of cols 'c'*/
import java.util.Scanner;
class hollowsrect{
    public static void main(String[] args) {
       int i,j,k;
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int c=sc.nextInt();
       for(i=1;i<=n;i++)
       {
           for(j=1;j<=c;j++)
           {
               if(i==1||j==1||i==n||j==c)
                  System.out.print("*");
                 else
                 System.out.print(" ");
           }
           System.out.println();
       }
    }
}
/*
I/P:
n=4 c=3
o/p
***
* *
* *
***
i/p
n=5 c=6
******
*    *
*    *
*    *
******
*/
