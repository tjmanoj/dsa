/*Input:
Number of elements in set1: 4
Elements are: 9, 9, 9, 9
Number of elements in set 2: 3
Elements are: 1,1,1
Output:
1, 0, 1, 1, 0
Input:
Number of elements in set1: 11
Elements are: 7,2,3,4,5,3,1,2,7,2,8
Number of elements in set 2: 3
Elements are: 1,2,3
Output: 7,2,3,4,5,3,1,2,8,5,1
*/
import java.util.Scanner;

public class ArrAdd {
    public static void main(String args[]) {
        Scanner in = new Scanner(System.in);

        System.out.println("Number of elements in set1: ");
        int size1 = in.nextInt();

        int[] arraya = new int[size1];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < size1; i++) {
            arraya[i] = in.nextInt();
        }

        System.out.println("Number of elements in set2: ");
        int size2 = in.nextInt();

        int[] arrayb = new int[size2];
        System.out.println("Enter the elements: ");
        for (int i = 0; i < size2; i++) {
            arrayb[i] = in.nextInt();
        }

        int flag = 1;

        for (int i = (size1 - 1), j = (size2 - 1); j >= 0; i--, j--) {
            arraya[i] = arraya[i] + arrayb[j];

            if ((arraya[i] > 9) && (i != 0)) {
                arraya[i] = arraya[i] % 10;
                arraya[i - 1] = arraya[i - 1] + 1;
            }
            if ((arraya[0] > 9)) {
                flag = 0;
                System.out.print("1," + arraya[0] % 10 + ",");
                for (int k = 1; k < size1; k++)
                    System.out.print(arraya[k] + ",");
                System.out.println(); // Added to format the output correctly
                break;
            }
        }
        if (flag != 0) {
            for (int k = 0; k < size1; k++)
                System.out.print(arraya[k] + (k < size1 - 1 ? "," : "")); // Adjusted for proper comma placement
            System.out.println(); // Added to format the output correctly
        }

        in.close();
    }
}
/*
The program iterates backwards through arraya and arrayb, adding corresponding elements of arrayb to arraya.
If any element in arraya exceeds 9, it handles the carry by taking the modulo 10 of the element and adding 1 to the preceding element in arraya.
Output:

If the first element of arraya exceeds 9 after processing, the program prints 1, the remainder of the first element divided by 10, and then the rest of arraya.
If no carry-over is needed for the first element, it prints arraya directly.
arraya = [7, 2, 3, 4, 5, 3, 1, 2, 7, 2, 8]
arrayb = [1, 2, 3]
Process from the end of the arrays:

Add elements from arrayb to corresponding elements in arraya from the end.
Iteration 1:

i = 10, j = 2
arraya[10] = 8 + 3 = 11
Since 11 > 9, carry the 1 to arraya[9].
arraya[10] = 11 % 10 = 1
arraya[9] = 2 + 1 = 3
arraya = [7, 2, 3, 4, 5, 3, 1, 2, 7, 3, 1]
Iteration 2:

i = 9, j = 1
arraya[9] = 3 + 2 = 5
arraya = [7, 2, 3, 4, 5, 3, 1, 2, 7, 5, 1]
Iteration 3:

i = 8, j = 0
arraya[8] = 7 + 1 = 8
arraya = [7, 2, 3, 4, 5, 3, 1, 2, 8, 5, 1]
Final adjustment:
arraya[0] did not exceed 9 during the process, so no additional carry needed.

2.Read the input:
arraya = [9, 9, 9, 9]
arrayb = [1, 1, 1]
Process from the end of the arrays:
Add elements from arrayb to corresponding elements in arraya from the end.

Iteration 1:
i = 3, j = 2
arraya[3] = 9 + 1 = 10
Since 10 > 9, carry the 1 to arraya[2].
arraya[3] = 10 % 10 = 0
arraya[2] = 9 + 1 = 10
arraya = [9, 9, 10, 0]

Iteration 2:
i = 2, j = 1
arraya[2] = 10 + 1 = 11
Since 11 > 9, carry the 1 to arraya[1].
arraya[2] = 11 % 10 = 1
arraya[1] = 9 + 1 = 10
arraya = [9, 10, 1, 0]

Iteration 3:
i = 1, j = 0
arraya[1] = 10 + 1 = 11
Since 11 > 9, carry the 1 to arraya[0].
arraya[1] = 11 % 10 = 1
arraya[0] = 9 + 1 = 10
arraya = [10, 1, 1, 0]

Final adjustment:
arraya[0] = 10
Since 10 > 9, set flag to 0 and prepare to output 1, 0, 1, 1, 0
*/
