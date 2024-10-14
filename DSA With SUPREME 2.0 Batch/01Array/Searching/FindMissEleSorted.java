public class FindMissEleSorted {
    public static int usingLinearSearch(int[] arr) {

        int n = arr.length;
    
        int missing = -1;

        int i = 0;

        while (i < n) {

            // Check if the element at index i matches i+1, means no missing element
            if (arr[i] == i + 1) {
                // Continue
                i++;


            // If the element does not match, means missing element
            } else {
                // Missing element is i+1
                missing = i + 1;


                // Exit the loop once the missing element is found
                break;
            }
        }
    
        return missing;
    }
    

    public static int usingBinarySearch(int[] arr) {

        int start = 0, end = arr.length - 1;
        int missing = -1;
    
        while (start <= end) {
            // Calculate the mid-point
            int mid = (start + end) / 2;
    
            // Calculate the difference of element value and its index
            int diff = arr[mid] - mid;
    
            if (diff == 1) {

                // If the difference is 1, means missing element in on right side
                start = mid + 1;

            } else if (diff == 2) {

                // If the difference is 2, means missing element in on left side
                // Store the missing element (arr[mid] - 1), Kya pata yahi missing value ho?

                missing = arr[mid] - 1;
                end = mid - 1;
            }
        }
    
        return missing;
    }    

    public static void main(String[] args){
        int[] arr = {1,2, 3, 4, 5, 6, 8, 9};
        int miss1 = usingLinearSearch(arr);
        System.out.println("(Linear) The missing number is: " + miss1);

        int miss2 = usingBinarySearch(arr);
        System.out.println("(Binary) The missing number is: " + miss2);
    }

}
