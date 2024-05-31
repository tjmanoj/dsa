/*Given a matrix of size N x N. Print the elements of the matrix in the snake like pattern depicted below.
For a matrix of 3*3 with ele as
1 2 3     
4 5 6
7 8 9
1->2->3
      |
4<-5<-6
|
7->8->9
*/
import java.util.Scanner;
class SnakePattern{
    public static void main(String[] args) {
       int i,j,k,c=1;
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       int co=sc.nextInt();
       int[][] a=new int[n][co];
       System.out.println("enter"+n*co+"elements");
       System.out.println("given array");
       for(i=0;i<n;i++)
       {
           for(j=0;j<co;j++)
           {
              a[i][j]=sc.nextInt();
              
              System.out.print(a[i][j]+" ");
              c++;
           }
           System.out.println("Patterned array");
       }
      System.out.println("");
    for(i=0;i<n;i++)
    {
        if(i%2==0){
        for(j=0;j<co;j++)
                 System.out.print(a[i][j]+" ");
            }
            else
              {
                 for(j=co-1;j>=0;j--) 
                    System.out.print(a[i][j]+" ");
              }
              System.out.println();
        }
        
    }
}
/* 
i/p:
n=3 co= 5
enter 15 elements
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 
o/p
given array
1 2 3 4 5 
6 7 8 9 10 
11 12 13 14 15 
patterned array
1 2 3 4 5 
10 9 8 7 6 
11 12 13 14 15 


*/
