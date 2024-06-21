/*
Input: N = 5, array[] = {1,2,3,4,5}
Output: 120 60 40 30 24
Explanation:
For 0th index, excluding 1 from product of whole array will give 120
For 1th index, excluding 2 from product of whole array will give 60
For 2nd index , excluding 3 from product of whole array will give 40
For 3rd index, excluding 4 from product of whole array will give 30
For 4th index , excluding 5 from product of whole array will give 24
Time Complexity: O(n)
Space Complexity: O(n)
*/
import java.util.Scanner;
class Solution {
    public static int[] productExceptSelf(int arr[]) {
        int n = arr.length;
        int product[] = new int[n];
        int prefix[] = new int[n];
        prefix[0] = 1; // since first element can have no prefix
        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] * arr[i - 1];
        }
        int suffixproduct = 1;
        // Building Product Array
        for (int i = n - 1; i >= 0; i--) {
            product[i] = suffixproduct * prefix[i];
            suffixproduct *= arr[i];
        }
        return product;
    }
    // Driver Code
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        int[] ret = productExceptSelf(arr);
        System.out.print("The product of array except itself is: ");
        for (int i = 0; i < n; i++) {
            System.out.print(ret[i] + ", ");
        }
    }
}
