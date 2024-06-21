/*
Write a program to print the following output for the given input. You can assume the string is of odd length
Input: 12345
Output:
1       5
  2   4
    3
  2  4
5       5
INPUT: PROGRAM
P      P

 R    R 

  O  O  

   G   

  R  R  

 A    A 

M      M
*/
public class Pattern 
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter the string: ");
        String str = in.nextLine();
        
        int size = str.length();
        
        char[][] matrix = new char[size][size];
        
        for(int i=0; i<size; i++)
            matrix[i][i] = str.charAt(i);
        
        for(int i=(size-1),j=0; j<size; i--,j++)
            matrix[i][j] = str.charAt(j);
        
        for(int i=0; i<size; i++)
        {
            for(int j=0; j<size; j++)
                System.out.print(matrix[i][j]);
            System.out.println();
        }   
    }
}
