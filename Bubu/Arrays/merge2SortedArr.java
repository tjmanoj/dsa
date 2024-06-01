/*
Given two sorted arrays, merge them such that the elements are not repeated
Eg 1: Input:
Array 1: 2,4,5,6,7,9,10,13
Array 2: 2,3,4,5,6,7,8,9,11,15

Output:
Merged array: 2,3,4,5,6,7,8,9,10,11,13,15
*/


import java.util.Scanner;
      public class merge2sortedArr
{
    public static void main(String artgs[])
    {
        Scanner in = new Scanner(System.in);
        
        int[] array1 = {2,4,5,6,7,9,10,13};//write as getting input from user 
        int[] array2 = {2,3,4,5,6,7,8,9,11,15};
        
        int[] array3 = new int[array1.length+array2.length];
        
        for (int i=0; i<array1.length; i++)
            array3[i] = array1[i];
        
        for (int i=array1.length,j=0; i<array1.length+array2.length; i++,j++)
            array3[i] = array2[j];
        
    //    for(int i=0; i<array3.length; i++)
    //      System.out.print(array3[i]+ " ");
        
        for(int i=0; i<array3.length; i++)
            for(int j=i+1; j<array3.length; j++)
            if(array3[i] > array3[j])
                {
                    int temp = array3[i];
                    array3[i]= array3[j];
                    array3[j]= temp;
                }
      //for(int i=0; i<array3.length; i++)
      //    System.out.print(array3[i]+ " ");
        
        System.out.println(array3[0]);
        for(int i=1; i<array3.length; i++)
        {
            int flag = 1;
            for(int j=0; j<i; j++)
            {
                if(array3[j] == array3[i])
                {   
                    flag = 0;
                    break;
                }
            }
            if(flag == 1)
                System.out.print(array3[i]+" ");
        }    
    }
}
