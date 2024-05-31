/* .Given a sentence of string, in that remove the palindrome words and print the remaining.
Input:
He did a good deed
Output:
He good

Input:
Hari speaks malayalam
Output:
Hari speaks
*/
import java.util.Scanner;

public class RemovePalindromes {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a sentence:");
        String sentence = sc.nextLine();
        
        String[] words = sentence.split("\\s+");
        StringBuilder result = new StringBuilder();

        for (String word : words) {
            if (!isPalindrome(word)) {
                result.append(word).append(" ");
            }
        }

        System.out.println(result.toString().trim());
    }

    private static boolean isPalindrome(String word) {
        int left = 0;
        int right = word.length() - 1;
        while (left < right) {
            if (word.charAt(left) != word.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
