public class SearchIn2D {

    // Linear search takes O(n^2) time, So we should avoid this
    public static int usingLinearSearch(int arr[][], int target){
        int ansIdx = -1;

        for(int raw=0 ; raw<arr.length ; raw++){
            for(int col=0 ; col<arr[raw].length ; col++){
                if(arr[raw][col] == target){

                    // Convert 2D index to 1D index (currentRaw * No_of_cols + currentCol)
                    ansIdx = raw * arr[raw].length + col;
                    break;
                }
            }
            // If target found then break
            if(ansIdx!= -1) break;
        }
        return ansIdx;
    }
    

    // Binary search takes O(log n) time, which is much more efficient
    public static int usingBinarySearch(int[][] arr, int target) {
        int ansIdx = -1;

        // Below code gets the size of the 2D array
        int noOfRows = arr.length;
        int noOfCols = arr[0].length;
        int size = noOfRows * noOfCols;


        int start = 0, end = size - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            //These 3 Lines of code are extra, other steps are same as 1D array searching
            // Convert 1D mid index to 2D row and column indices
            int midRow = mid / noOfCols;
            int midCol = mid % noOfCols;
            int currentEle = arr[midRow][midCol];

            if (currentEle == target) {
                ansIdx = mid;
                break;
            } else if (currentEle < target) {
                // Move to the right half
                start = mid + 1;
            } else {
                // Move to the left half
                end = mid - 1;
            }
        }

        return ansIdx;
    }



    public static void main(String[] args){
        int[][] arr = {
            {10, 20, 30},
            {40, 50, 60},
            {70, 80, 90}
        };

        int ansIdx1 = usingBinarySearch(arr,60);
        System.out.println("(Using Linear Search) Target found at index: " + ansIdx1);

        int ansIdx2 = usingBinarySearch(arr,60);
        System.out.println("(Using Binary Search) Target found at index: " + ansIdx2);
    }
}
