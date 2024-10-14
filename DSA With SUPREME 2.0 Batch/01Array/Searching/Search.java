// Note before performing Binary search array elements must be sorted

 // For using sorting function
 class Search{

    public static int linearSearch(int[] arr, int target){
        // Edge case: If array is empty
        if (arr.length == 0){
            throw new IllegalArgumentException("Array must not be empty");
        }

        // Search through each element of array
        for(int i=0 ; i<arr.length ; i++){
            //Check linearly, if target is found return index
            if (arr[i] == target){
            return i;
            }
        }

        // If element not found, return -1
        return -1;
    }

    public static int binarySearch(int[] arr, int target){
        //Edge case: If array is empty
        if (arr.length == 0){
            throw new IllegalArgumentException("Array must not be empty");
        }

        // Intialize left and right
        int left = 0, right = arr.length-1;

        // Loop until left pointer exceeds right pointer
        while(left <= right){

            //calculate mid
            int mid = left + (right - left) / 2;

            //If target is found, return that position
            if(arr[mid] == target){
                return mid;
                
            // If target is greater then arr[mid], means target is on right side of mid
            }else if(arr[mid]< target){
                left = mid +1;

            // If target is smaller then arr[mid], means target is on left side of mid
            }else if(arr[mid]> target){
                right = mid-1;
            }
        }

        // If element not found, return -1
        return -1;
    }

    public static void main(String[] args){
        int[] arr = {3, 5, 6, 9, 18, 76};
        int target = 18;

        int result1 = linearSearch(arr, target);
        int result2 = binarySearch(arr, target);

        System.out.println("(Linear Search) Element Found at index: "+ result1);
        System.out.println("(Binary Search) Element Found at index: "+ result2);
    }
}
