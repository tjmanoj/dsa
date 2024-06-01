/*
Given two strings, find the first occurrence of all characters of second string in the first string and

print the characters between the least and the highest index

I/P: ZOHOCORPORATION PORT

O/P: OHOCORPORAT
*/

import java.util.Scanner;

public class FirstOccur {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();
        int minIndex = str1.length();
        int maxIndex = -1;

        for (int j = 0; j < str2.length(); j++) {
            char ch = str2.charAt(j);
            int index = str1.indexOf(ch);
            if (index != -1) {
                if (index < minIndex) {
                    minIndex = index;
                }
                if (index > maxIndex) {
                    maxIndex = index;
                }
            }
        }

        if (minIndex <= maxIndex) {
            for (int i = minIndex; i <= maxIndex; i++) {
                System.out.print(str1.charAt(i));
            }
        } else {
            System.out.println("No such substring found");
        }
    }
}
