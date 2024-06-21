/*
Given a string s, return the longest palindromic substring in s.
The longest palindromic subsequence of a string is the longest common subsequence of the given string and its reverse.
Approach:

We are given a string (say s), make a copy of it and store it( say string t).
Reverse the original string s.
Find the longest common subsequence as discussed in dp-25.

Example 1:
Input: s = "babad"
Output: "bab"
Explanation: "aba" is also a valid answer.

Example 2:
Input: s = "bbbab"
Output: "bb"
Explanation:There can be many subsequences like “b”, “ba”,”bbb” but “bbbb” is the subsequence that is a palindrome and has the greatest length.

Time Complexity: O(N*N)
Reason: There are two nested loops.
Space Complexity: O(N)
Reason: We are using an external array of size ‘N+1’ to store only two rows.
*/
import java.util.Scanner;
class TUF {
    // Function to find the length of the Longest Common Subsequence (LCS)
    static int lcs(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();

        // Create two arrays to store the LCS lengths
        int[] prev = new int[m + 1];
        int[] cur = new int[m + 1];

        // Base Case: Initialized to 0, as no characters matched yet.
        for (int ind1 = 1; ind1 <= n; ind1++) {
            for (int ind2 = 1; ind2 <= m; ind2++) {
                if (s1.charAt(ind1 - 1) == s2.charAt(ind2 - 1))
                    cur[ind2] = 1 + prev[ind2 - 1];
                else
                    cur[ind2] = Math.max(prev[ind2], cur[ind2 - 1]);
            }
            // Update prev array to store the current values
            prev = cur.clone();
        }

        return prev[m];
    }

    // Function to find the length of the Longest Palindromic Subsequence
    static int longestPalindromeSubsequence(String s) {
        // Create a reversed version of the input string manually
        char[] reversedArray = new char[s.length()];
        for (int i = 0; i < s.length(); i++) {
            reversedArray[i] = s.charAt(s.length() - 1 - i);
        }
        String reversed = new String(reversedArray);

        // Calculate the LCS of the original string and its reverse
        return lcs(s, reversed);
    }

    // Function to find the longest palindromic substring
    static String longestPalindromeSubstring(String s) {
        int n = s.length();
        if (n == 0) return "";

        boolean[][] dp = new boolean[n][n];
        int maxLength = 1;
        int start = 0;

        // All substrings of length 1 are palindromic
        for (int i = 0; i < n; i++) {
            dp[i][i] = true;
        }

        // Check for substrings of length 2
        for (int i = 0; i < n - 1; i++) {
            if (s.charAt(i) == s.charAt(i + 1)) {
                dp[i][i + 1] = true;
                start = i;
                maxLength = 2;
            }
        }

        // Check for substrings of length greater than 2
        for (int k = 3; k <= n; k++) {
            for (int i = 0; i < n - k + 1; i++) {
                int j = i + k - 1;

                if (dp[i + 1][j - 1] && s.charAt(i) == s.charAt(j)) {
                    dp[i][j] = true;

                    if (k > maxLength) {
                        start = i;
                        maxLength = k;
                    }
                }
            }
        }

        return s.substring(start, start + maxLength);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input string
        System.out.println("Enter the string: ");
        String s = scanner.nextLine();

        System.out.print("The Length of Longest Palindromic Subsequence is ");
        System.out.println(longestPalindromeSubsequence(s));

        System.out.print("The Longest Palindromic Substring is ");
        System.out.println(longestPalindromeSubstring(s));
    }
}
