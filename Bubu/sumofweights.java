/*  Given a set of numbers like <10, 36, 54,89,12> we want to find sum of weights based on the following conditions
    1. 5 if a perfect square
    2. 4 if multiple of 4 and divisible by 6
    3. 3 if even number

And sort the numbers based on the weight and print it as follows

<10,its_weight>,<36,its weight><89,its weight>

Should display the numbers based on increasing order.
Input:
<10, 36, 54,89,12>
Output:
Elements with descending order weights
<36,12>,<12,7>,<10,3>,<54,3>,<89,0>



 */
public class NumWeight 
{
    public static void main(String args[])
    {
        int[] numArray = {10, 36, 54, 89, 12};// manually get array size and elements
        int numArraylen = numArray.length;
        int[] weightArray = new int[numArraylen];
        
        // Calculate weights
        for(int i=0; i<numArraylen; i++)
        {
            int weight = 0;
            int num = numArray[i];
            int sq = (int) Math.sqrt(num);
            if((sq * sq) == num)
                weight += 5;
     
            if(num % 4 == 0 && num % 6 == 0)
                weight += 4;
     
            if(num % 2 == 0)
                weight += 3;
            
            weightArray[i] = weight;
        }
        
        // Sort numArray based on weightArray using bubble sort
        for(int i=0; i<numArraylen - 1; i++) {
            for(int j=0; j<numArraylen - 1 - i; j++) {
                if(weightArray[j] < weightArray[j + 1]) {
                    // Swap weights
                    int tempWeight = weightArray[j];
                    weightArray[j] = weightArray[j + 1];
                    weightArray[j + 1] = tempWeight;
                    
                    // Swap corresponding numbers
                    int tempNum = numArray[j];
                    numArray[j] = numArray[j + 1];
                    numArray[j + 1] = tempNum;
                }
            }
        }
        System.out.println("Elements with descending order weights");
        // Print the results
        for(int i=0; i<numArraylen; i++)
        {
            System.out.print("<" + numArray[i] + "," + weightArray[i] + ">");
            if (i < numArraylen - 1) {
                System.out.print(",");
            }
        }
    }
}

