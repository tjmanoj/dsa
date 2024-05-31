import java.util.HashMap;
import java.util.Scanner;

class Solution {
    public static int numIdenticalPairs(int[] nums) {
        int c = 0;
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int sno = nums[i];
            if (map.containsKey(sno)) {
                c += map.get(sno);
                map.put(sno, map.get(sno) + 1);
            } else {
                map.put(sno, 1);
            }
        }

        return c;
    }

    public static void main(String args[]) {
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        n = sc.nextInt();
        
        int nums[] = new int[n];
        System.out.println("Enter the elements of the array:");
        for (int i = 0; i < nums.length; i++) {
            nums[i] = sc.nextInt();
        }

        int result = numIdenticalPairs(nums);
        System.out.println("Number of good pairs: " + result);
    }
}
