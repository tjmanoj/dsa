/*
Sort the string using countsort
input :
str=apples
output:
aelpps
*/
public class Main {

    public static void main(String[] args) {
        int[] alphabets = new int[26];
        String str = "apples";//get the string from user
        StringBuilder answer = new StringBuilder();

        // For calculating frequencies
        for (char i : str.toCharArray()) {
            alphabets[i - 'a']++;
        }

        // Appending alphabets to result
        for (int i = 0; i < 26; i++) {
            for (int j = 0; j < alphabets[i]; j++) {
                answer.append((char) (i + 'a'));
            }
        }

        System.out.println(answer.toString());
    }
}
/*
Initialization:
int[] alphabets = new int[26];: This array keeps track of the frequency of each alphabet.
String str = "apples";: The input string.
StringBuilder answer = new StringBuilder();: A StringBuilder to build the final answer.

Calculating Frequencies:
for (char i : str.toCharArray()) { alphabets[i - 'a']++; }: This loop iterates over each character in the string and increments the corresponding index in the alphabets array.

Building the Result:
for (int i = 0; i < 26; i++) { for (int j = 0; j < alphabets[i]; j++) { answer.append((char) (i + 'a')); } }: This nested loop constructs the sorted string based on the frequencies stored in the alphabets array.

Output the Result:
System.out.println(answer.toString());: Finally, the result is printed to the console.

*/
