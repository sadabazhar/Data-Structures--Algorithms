public class DivideUsingBinarySearch {

    public static int divide(int dividend, int divisor) {
        int ans = -1;
    
        // Edge cases for division by 0
        if (divisor == 0) {
            throw new IllegalArgumentException("Divisor cannot be zero");
        }

        int start = 0;
        // Absolute values to handle negatives
        int end = Math.abs(dividend); 

        while (start <= end) {
            int mid = start + (end - start) / 2;
    
            if (mid * Math.abs(divisor) == Math.abs(dividend)) {

                // mid is answer
                ans = mid;
                break;
    
            } else if (mid * Math.abs(divisor) < Math.abs(dividend)) {
                // May mid is answer, so we should store it
                ans = mid; 

                // Move close to the answer
                start = mid + 1;
    
            } else {

                // If calculate number is big, Reduce the search range
                end = mid - 1;
            }
        }

        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0)) {
            // If atleast one is -ve return the negative result
            return -ans;
        }
    
        return ans;
    }
    
    public static void main(String[] args) {
        int ans = divide(-49, -49);
        System.out.println(ans);
    }
}
