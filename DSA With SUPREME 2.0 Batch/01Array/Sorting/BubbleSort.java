/*
 * Algorithm of bubble sort
    1. Start from the first element: Compare the first element with the second.
    2. Swap if needed: If the first element is bigger than the second, swap them.
    3. Move to the next pair: Compare the second and third elements, and swap if needed.
    4. Continue comparing: Keep going like this until the end of the list. By now, the largest element will have "bubbled up" to the end.
    5. Repeat: Start again from the beginning and repeat the process, ignoring the last (already sorted) elements.
    6. Stop when sorted: Keep doing this until no more swaps are needed, meaning the list is sorted.
 */

public class BubbleSort {

    public static void bubbleSort(int[] arr) {
        int n = arr.length;

        for (int i = 0; i < n - 1; i++) { // n - 1 avoid index out of bounds
            for (int j = 0; j < n - i - 1; j++) { // n - i - 1 ignore already sorted elements
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr = {64, 34, 25, 12, 22, 11, 90};

        System.out.print("Unsorted array:");
        for(int elem: arr){
            System.out.println(elem);
        }

        bubbleSort(arr);

        System.out.print("\nSorted array:");
        for(int elem: arr){
            System.out.println(elem);
        }
    }
}
