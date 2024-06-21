/*To find the factors of the numbers given in an array and to sort the numbers in descending order according to the factors present in it.
Input:
Given array : 8, 2, 3, 12, 16
Output:
12, 16, 8, 2, 3
*/
import java.util.Scanner;
public class Factor 
{
    public static void main(String args[])
    {
        int array[] = {8, 2, 3, 12, 16};
        int[] temparr = new int[array.length];
        
        for(int i=0; i<array.length; i++)
        {
            int count = 0;
            for(int j=1; j<=array[i]/2; j++)
            {
                if(array[i] % j == 0)
                    count++;
            }
            temparr[i] = count;
        }
        
       for(int i=0; i<array.length; i++)
           for(int j=i+1; j<array.length; j++)
               if(temparr[i] < temparr[j])
               {
                   int temp1 = temparr[i];
                   temparr[i] = temparr[j];
                   temparr[j] = temp1;
                   
                   int temp2 = array[i];
                   array[i] = array[j];
                   array[j] = temp2;
               }
           
        for(int i=0; i<array.length; i++)
            System.out.println(array[i]);
    }
}
/*
Initialization:

The given array is array[] = {8, 2, 3, 12, 16}.
A temporary array temparr of the same length is created to store the count of factors for each number in the original array.
Counting Factors:

Loop through each element in the array.
For each element, count its factors by iterating from 1 to half of the element's value.
If the current number is divisible by the iterator, increase the count of factors.
Store the count of factors in the temparr.
Sorting:

Use a nested loop to sort the array based on the values in temparr.
For each pair of elements, if the factor count of the first element is less than the second, swap them.
Swap both the factor counts in temparr and the corresponding elements in the array.
Output:

Print the elements of the sorted array.
*/
