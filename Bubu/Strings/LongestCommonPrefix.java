/*
Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".

Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.

*/
import java.util.Scanner;
class Solution {
    public static String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0) {
            return "";
        }
        // Manually sort the array by length
        for (int i = 0; i < strs.length - 1; i++) {
            for (int j = 0; j < strs.length - i - 1; j++) {
                if (strs[j].length() > strs[j + 1].length()) {
                    String temp = strs[j];
                    strs[j] = strs[j + 1];
                    strs[j + 1] = temp;
                }
            }
        }

        char[] p = new char[strs[0].length()];
        for (int i = 0; i < strs[0].length(); i++) {
            char d = strs[0].charAt(i);
            for (int j = 1; j < strs.length; j++) {
                if (strs[j].charAt(i) != d) {
                    // If not common, return the prefix found so far
                    return new String(p, 0, i);
                }
            }
            p[i] = d;
        }
        return new String(p);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine(); // Consume newline character after reading integer input
        String[] s = new String[n];
        int count = 0; // Count the number of lowercase strings
        for (int i = 0; i < n; i++) {
            String input = sc.nextLine();
            if (input.matches("[a-z]+")) { // Check if the input contains only lowercase letters
                s[count++] = input;
            }
        }
        // Create a new array to store only the valid lowercase strings
        String[] si = new String[count];
        for (int i = 0; i < count; i++) {
            si[i] = s[i];
        }
        // Now you can use the si array for further processing
        // Example: calling a method longestCommonPrefix with si array
        String r = longestCommonPrefix(si);
        System.out.println(r);
    }
}
/*The nested loops implement a simple bubble sort to sort the strings by length.
Array Handling:

The method reads n strings from the user and only includes valid lowercase strings in the si array.
Finding Longest Common Prefix:

The method iterates through the characters of the shortest string and compares them with the corresponding characters in the other strings.
If a mismatch is found, the common prefix up to that point is returned.*/
