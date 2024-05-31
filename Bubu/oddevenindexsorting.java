 /*Write a program to sort the elements in odd positions in descending order and elements in ascending order

Eg 1: Input: 13,2 4,15,12,10,5
        Output: 13,2,12,10,5,15,4
Eg 2: Input: 1,2,3,4,5,6,7,8,9
        Output: 9,2,7,4,5,6,3,8,1 
 */
 import java.util.Scanner;
public class Pos_sort
{
    public static void main(String args[])
    {
        Scanner in = new Scanner(System.in);
        int[] arr = new int[20];
        System.out.println("Enter the array size: ");
        
        int size = in.nextInt();
      
        System.out.println("Enter the array elements: ");
        for(int i=0; i<size; i++)
            arr[i] = in.nextInt();
      
        int[] ascend  = new int[size/2];
        int[] descend = new int[(size)-(size/2)];
        
        int k =0 , l =0;
        for(int i=0; i<size; i++)
        {
            if(i%2 == 0)
            {
                descend[k] = arr[i];
                k++;
            }       
            else
            {
                ascend[l] = arr[i];
                l++;
            }
        }
     /*   
      for(int i=0; i<ascend.length; i++)
            System.out.println(ascend[i]);
        
        for(int i=0; i<descend.length; i++)
            System.out.println(descend[i]);
    */
        for(int i=0; i<descend.length; i++)
            for(int j=i+1; j<descend.length; j++)
               if(descend[i] < descend[j])
               {
                   int temp = descend[i];
                   descend[i] = descend[j];
                   descend[j] = temp;
               }
        for(int i=0; i<ascend.length; i++)
            for(int j=i+1; j<ascend.length; j++)
               if(ascend[i] > ascend[j])
               {
                   int temp = ascend[i];
                   ascend[i] = ascend[j];
                   ascend[j] = temp;
               }
   
        /*   for(int i=0; i<ascend.length; i++)
            System.out.println(ascend[i]);
        
        for(int i=0; i<descend.length; i++)
            System.out.println(descend[i]);
         */
        k =0; 
        l =0;
        for(int i=0; i<size; i++)
        {
            if(i%2 == 0)
            {
               System.out.print(descend[k]+",");
               k++;
            }       
            else
            {
               System.out.print(ascend[l]+",");
               l++;
            }
        }
    }
}
