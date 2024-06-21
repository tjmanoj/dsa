/*
Given two dimensional matrix of integer and print the rectangle can be formed using given indices and also find the sum of the elements in the rectangle

Input: mat[M][N] = {{1, 2, 3, 4, 6}, {5, 3, 8, 1, 2}, {4, 6, 7, 5, 5}, {2, 4, 8, 9, 4} };

index = (2, 0) and (3, 4)

Output:

Rectangle

4 6 7 5 5

2 4 8 9 4

sum 54
*/


import java.util.Scanner;
public class RectangleSum {
    public static void main(String[] args) {
          Scanner sc = new Scanner(System.in);
        System.out.println("Enter no.of rows:");
        int M=sc.nextInt();
        System.out.println("Enter no.of columns:");
        int N=sc.nextInt();
        int [][] a=new int[M][N];
        System.out.println("Enter"+M*N+" elements");
        for (int i = 0; i < M; i++) {
            for (int j = 0; j <N; j++) {
          a[i][j]=sc.nextInt();
            }
        }
        System.out.println("Enter starting index (row, col): ");
        int row1 = sc.nextInt();
        int col1 = sc.nextInt();
        
        
        System.out.println("Enter ending index (row, col): ");
        int row2 = sc.nextInt();
        int col2 = sc.nextInt();
        
        int sum = 0;
        System.out.println("Rectangle:");
        for (int i = row1; i <= row2; i++) {
            for (int j = col1; j <= col2; j++) {
                System.out.print(a[i][j] + " ");
                sum += a[i][j];
            }
            System.out.println();
        }
        
        System.out.println("Sum: " + sum);
    }
}
