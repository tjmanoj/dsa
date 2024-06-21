/*
A subsequence of a string is a list of characters of the string where some characters are deleted ( or not deleted at all) and 
they should be in the same order in the subsequence as in the original string.
Note: For a string of length n, the number of subsequences will be 2n.
Now we will look at “Longest Common Subsequence”. The longest Common Subsequence is defined for two strings. It is the common subsequence that has the greatest length.
Input:
s1=adebc
s2=dcadb
Output
"adb"
*/

import java.util.Scanner;

class TUF {
    // Function to find the length of the Longest Common Subsequence (LCS)
    static int lcs(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();

        // Create arrays to store the LCS lengths
        int[] prev = new int[m + 1];
        int[] cur = new int[m + 1];

        // Iterate through the strings and calculate LCS lengths
        for (int ind1 = 1; ind1 <= n; ind1++) {
            for (int ind2 = 1; ind2 <= m; ind2++) {
                // If the characters at the current indices are the same, increment the LCS length
                if (s1.charAt(ind1 - 1) == s2.charAt(ind2 - 1))
                    cur[ind2] = 1 + prev[ind2 - 1];
                // If the characters are different, choose the maximum LCS length by either
                // excluding a character in s1 or excluding a character in s2
                else
                    cur[ind2] = Math.max(prev[ind2], cur[ind2 - 1]);
            }
            // Update the 'prev' array to the values of 'cur' for the next iteration
            prev = cur.clone();
        }

        return prev[m]; // Return the length of the Longest Common Subsequence (LCS)
    }

    // Function to find the actual Longest Common Subsequence (LCS)
    static String findLCS(String s1, String s2) {
        int n = s1.length();
        int m = s2.length();

        // Create arrays to store the LCS lengths
        int[][] dp = new int[n + 1][m + 1];

        // Populate the dp array
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                if (s1.charAt(i - 1) == s2.charAt(j - 1))
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                else
                    dp[i][j] = Math.max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        // Reconstruct the LCS from the dp array
        int i = n, j = m;
        StringBuilder lcs = new StringBuilder();
        while (i > 0 && j > 0) {
            if (s1.charAt(i - 1) == s2.charAt(j - 1)) {
                lcs.append(s1.charAt(i - 1));
                i--;
                j--;
            } else if (dp[i - 1][j] > dp[i][j - 1]) {
                i--;
            } else {
                j--;
            }
        }

        return lcs.reverse().toString();
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Get two strings from the user
        System.out.println("Enter the first string: ");
        String s1 = scanner.nextLine();

        System.out.println("Enter the second string: ");
        String s2 = scanner.nextLine();

        // Calculate the length of LCS
        int length = lcs(s1, s2);
        System.out.println("The Length of Longest Common Subsequence is " + length);

        // Find and print the actual LCS
        String lcsString = findLCS(s1, s2);
        System.out.println("The Longest Common Subsequence is " + lcsString);
    }
}
/*
refer 
https://takeuforward.org/data-structure/longest-common-subsequence-dp-25/

*/
