/*Alternate sorting: Given an array of integers, rearrange the array in such a way that the first element is first maximum and second element is first minimum.
    Input  : {1, 2, 3, 4, 5, 6, 7}
         Output : {7, 1, 6, 2, 5, 3, 4} */
 import java.util.Scanner;
public class AlterSort 
{
    public static void main(String[] args) 
    {
        Scanner in = new Scanner(System.in);
            
        System.out.println("Enter the array size: ");
        int size = in.nextInt();
        
        int[] arr = new int[size]; 
        
        System.out.println("Enter the array elements");
        for(int i=0; i<size; i++)
            arr[i] = in.nextInt();
        
        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
                if(arr[i] > arr[j])
                {
                    int tempv = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tempv;
                }
        
        System.out.println("Array before alternate sorting");
        
        for(int i=0; i<size; i++)
            System.out.print(arr[i]+"\t");
        
        int[] temp = new int[size];
        
        for(int i=0,k=0,j=(size-1); i<size; i++,j--,k++)
        {
            temp[i]   = arr[j];
            if(i+1 >= size)
                break;
            temp[++i] = arr[k];
        }
        
        System.out.println();
        System.out.println("Array after alternate sorting");
        
        for(int i=0; i<size; i++)
            System.out.print(temp[i]+"\t");   
    }           
}
