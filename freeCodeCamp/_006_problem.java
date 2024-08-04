/**
 * This problem is implemented in Java to demonstrate dynamic array resizing.
 * In C++, arrays have a fixed size and cannot be directly resized. Although
 * one can create a new array and copy the elements, reassigning the original
 * array variable to the new array directly is not possible in the same way.
 * Java provides a more straightforward method to handle such operations.
 * 
 * 
 * Additionally, I know the basic syntax of Java, so I decided to solve this
 * problem in Java.
 */

public class _006_problem {

    public static int[] resize(int[] arr, int capacity) {
        int[] temp = new int[capacity];
        for (int i = 0; i < arr.length; i++) {
            temp[i] = arr[i];
        }
        return temp;
    }

    public static void main(String[] args) {
        int[] arr = { 3, 0, 2, 0, 1 };
        int newLen = 8; // new length

        arr = resize(arr, newLen);

        System.out.print("Result arr: ");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}
