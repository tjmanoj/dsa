import java.util.Scanner;
class PascalTriangle{
    public static void main(String[] args) {
       int i,j,k;
       Scanner sc=new Scanner(System.in);
       int n=sc.nextInt();
       for (int line = 1; line <= n; line++) {
            for ( j = 0; j <= n - line; j++) {
 
                // for left spacing
                System.out.print(" ");
            }
 
            // used to represent C(line, i)
            int C = 1;
            for ( i = 1; i <= line; i++) {
 
                // The first value in a line is always 1
                System.out.print(C + " ");
                C = C * (line - i) / i;
            }
            System.out.println();
        }
    }
}
/* n=6
      1 
     1 1 
    1 2 1 
   1 3 3 1 
  1 4 6 4 1 
 1 5 10 10 5 1 */
 
