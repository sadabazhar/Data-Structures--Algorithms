/*
 * Search greater element in sorted rotated array
 * I/p: 12, 14, 16, 2, 4, 6, 8
 * O/p: 16
*/

public class PivotElement {

    public static int findPivotElement(int[] arr) {
        int start = 0, end = arr.length - 1;
    
        while (start <= end) {
            int mid = start + (end - start) / 2;
    
            // Check if mid is the pivot point
            if (mid < end && arr[mid] > arr[mid + 1]) {
                // "mid < end" prevents array index out of bounds
                return mid;
            }
            if (mid > start && arr[mid] < arr[mid - 1]) {
                // "mid > start" prevents array index out of bounds
                return mid - 1;
            }
    
            // Determine which side to search for the pivot
            if (arr[start] >= arr[mid]) {
                // Pivot is on the left side
                end = mid - 1;
            } else {
                // Pivot is on the right side
                start = mid + 1;
            }
        }
    
        // If no pivot is found, return -1
        return -1;
    }
    

    public static void main(String[] args) {
        int[] arr = {12, 14, 16, 2, 4, 6, 8};
        int pivot = findPivotElement(arr);

        System.out.println("Pivot: " + pivot);
        System.out.println("Pivot element: " + arr[pivot]);
    }
}
