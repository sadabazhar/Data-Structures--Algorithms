/*
 * Find peek index in a mountain array
 * I/p: {10, 20, 30, 40, 20, 10}
 * O/p: 3rd index
 */

public class PeekIndex {
    public static int findPeakIndex(int[] arr) {
        int start = 0, end = arr.length - 1;
    
        // Edge case: if the array has less than 2 elements
        if (arr.length < 2) {
            return -1;
        }
    
        while (start < end) {
            int mid = start + (end - start) / 2;
    
            // Check if mid is greater than the next element
            if (mid < end && arr[mid] > arr[mid + 1]) {
                // Move left to check for the peak
                end = mid; 
            } else {
                // If mid is less than or equal to the next element, move right
                start = mid + 1;
            }
        }
    
        // When the loop exits, start == end and it points to the peak
        //return start or end, both will point to the peak
        return start; 
    }
    
    

    public static void main(String[] args) {
        int[] arr = {10, 20, 30, 40, 50};
        int index = findPeakIndex(arr);
        System.out.println("Peek Index: " + index);
    }
}