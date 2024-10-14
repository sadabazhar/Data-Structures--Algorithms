/*
 * Find first and last occurrence of the specified element
 * I/p: 33, 33, 33, 33, 33, 76, 77 [Key = 33]
 * O/p: Fisrt occurrence = 0, Last occurrence = 4
 */

class First_Occurrence {

    // Method to find the first occurrence of a key in an array
    public static int findFirstOccurrence(int[] arr, int key) {
        int start = 0, end = arr.length - 1;
        int firstIndex = -1;
    
        while (start <= end) {
            int mid = start + (end - start) / 2;
    
            if (arr[mid] == key) {
                // If key is found, store the index
                firstIndex = mid;
    
                // To find the first occurrence, search in the left half
                end = mid - 1;
            } else if (arr[mid] < key) {

                // If the key is greater, search in the right half
                start = mid + 1;
            } else {
                
                // If the key is smaller, search in the left half
                end = mid - 1;
            }
        }
    
        return firstIndex;
    }

    // Method to find the last occurrence of a key in an array
    public static int findLastOccurrence(int[] arr, int key) {
        int start = 0, end = arr.length - 1;
        int lastIndex = -1;
    
        while (start <= end) {
            int mid = start + (end - start) / 2;
    
            if (arr[mid] == key) {
                // If key is found, store the index
                lastIndex = mid;
    
                // To find the last occurrence, search in the right half
                start = mid + 1;
            } else if (arr[mid] < key) {
                // If the key is greater, search in the right half
                start = mid + 1;
            } else {
                // If the key is smaller, search in the left half
                end = mid - 1;
            }
        }
    
        return lastIndex;
    }
    

    public static int findTotalOccurrence(int[] arr, int key) {
        int first = findFirstOccurrence(arr, key);
        int last = findLastOccurrence(arr, key);
    
        // If the key is not found in the array
        if (first == -1 || last == -1) {
            return 0; // No occurrences
        }
    
        // Adding 1 because first & last occurrence return index positions
        int total = (last - first) + 1;
        return total;
    }
    
    
    public static void main(String[] args) {
        int[] arr = {33, 33, 33, 33, 33, 76, 77};
        int key = 33;

        int first = findFirstOccurrence(arr, key);
        System.out.println("First Occurrence of " + key + " at index: " + first);

        int last = findLastOccurrence(arr, key);
        System.out.println("Last Occurrence of " + key + " at index: " + last);
        
        int total = findTotalOccurrence(arr, key);
        System.out.println("Total Occurrence of " + key + " is: " + total);
    }
}
