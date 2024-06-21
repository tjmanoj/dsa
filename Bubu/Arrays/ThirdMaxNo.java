/*
Given an integer array nums, return the third distinct maximum number in this array. If the third maximum does not exist, return the maximum number.
Input: nums = [2,2,3,1]
Output: 1
Explanation:
The first distinct maximum is 3.
The second distinct maximum is 2 (both 2's are counted together since they have the same value).
The third distinct maximum is 1.

Input: nums = [1,2]
Output: 2
Explanation:
The first distinct maximum is 2.
The second distinct maximum is 1.
The third distinct maximum does not exist, so the maximum (2) is returned instead.
*/
class Solution {
    public static int thirdMax(int[] nums) {
        Integer max1 = null;
        Integer max2 = null;
        Integer max3 = null;
        for (Integer num : nums) {
            if (num.equals(max1) || num.equals(max2) || num.equals(max3)) {
                continue; // Skip duplicates
           }
            if (max1 == null || num > max1) {
                max3 = max2;
                max2 = max1;
                max1 = num;
            } else if (max2 == null || num > max2) {
                max3 = max2;
                max2 = num;
            } else if (max3 == null || num > max3) {
                max3 = num;
            }
        }
        return max3 != null ? max3 : max1; // If there is no third maximum, return the first maximum
    }
    public static void main(String args[]) {
        int[] nums = {1, 2, 3, 4, 5}; // Example array

        int thirdMax = thirdMax(nums);
        System.out.println("Third Maximum Element: " + thirdMax);
    }
}

/*
Step-by-Step Explanation
Initialization:

Three variables max1, max2, and max3 are initialized to null. These will be used to keep track of the first, second, and third maximum unique elements, respectively.
Iteration through the array:

The loop iterates over each element in the array.
Skipping duplicates:

If the current element is already one of the maximums (max1, max2, or max3), it is skipped to avoid duplicates.
Updating maximums:

If max1 is null or the current element is greater than max1, the maximums are updated:
max3 is set to max2
max2 is set to max1
max1 is set to the current element
If the current element is not greater than max1 but greater than max2 or max2 is null, update:
max3 is set to max2
max2 is set to the current element
If the current element is not greater than max2 but greater than max3 or max3 is null, update:
max3 is set to the current element
Return the result:
If max3 is not null, return max3, else return max1 (the maximum element if there is no third maximum).

Example Walkthrough: {1, 2, 3, 4, 5}
Initial State:
max1 = null, max2 = null, max3 = null

First iteration (num = 1):
max1 = 1, max2 = null, max3 = null

Second iteration (num = 2):
max1 = 2, max2 = 1, max3 = null

Third iteration (num = 3):
max1 = 3, max2 = 2, max3 = 1

Fourth iteration (num = 4):
max1 = 4, max2 = 3, max3 = 2

Fifth iteration (num = 5):
max1 = 5, max2 = 4, max3 = 3
At the end of the loop, max3 is 3, which is the third maximum unique element. Thus, the function returns 3.
*/
