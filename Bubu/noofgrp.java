/*To find the number of groups and output the groups:
Explanation: To find the sum of the elements in the groups and that sum should be divisible by input X and the groups should be limited to range with X numbers.
If X is 3, then the group should have only 2 elements and 3 elements from the array whose sum is divisible by 3.
Input:
Array: 3, 9, 7, 4, 6, 8
X: 3
Output:
3, 9
3, 6
9, 6
3, 9, 6
No of groups: 4
*/
import java.util.Scanner;

public class Group 
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        
        System.out.println("Enter the array size: ");
        int size = in.nextInt();
        
        int[] array = new int[size];
        int[] arrayb = new int[size];
       
        System.out.println("Enter the array elements :");
        for(int i=0; i<size; i++)
            array[i] = in.nextInt();

        System.out.println("Enter the x value :");
        int x = in.nextInt();
        
        int powerset_size = (int)Math.pow(2,size);
        int groups = 0;
        
        for(int counter = 0; counter < powerset_size; counter++)
        {
            int sum = 0,k = 0;
            for(int i=0; i < size; i++)
            {
                int num =  counter & (1 << i);
                if(num >= 1)
                {
                    sum = sum + array[i];
                    arrayb[k] = array[i];
                    k++;
                }
            }           
            if(sum % x == 0)
                if((k > 1) && (k <= (x)))
                {
                    groups++;
                    for(int i=0; i<k; i++)
                        if(arrayb[i] != 0)
                            System.out.print(arrayb[i]+",");
                    System.out.println();
                }
        }
        System.out.println("Number of groups in that array: "+groups);
    }
}
/*

*/
