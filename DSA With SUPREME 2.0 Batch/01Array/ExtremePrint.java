/*
 * I/P => For even: 12, 23, 131, 34, 15, 22 
 *          0r Odd: 12, 22, 23, 15, 131, 34
 * O/p => For even: 12, 23, 131, 34, 15 
 *               Or 12, 15, 23, 34, 131
*/


class ExtremePrint {

    public static void extremePrint(int[] arr) {

        // Edge case
        if (arr == null || arr.length == 0) {
            throw new IllegalArgumentException("Array must not be null or empty");
        }

        int start = 0;
        int end = arr.length - 1;

        while (start <= end) {

            System.out.print(arr[start++] + " ");

            //Edge case for odd elements
            if (start <= end) {
                System.out.print(arr[end--] + " ");
            }

        }
    }

    public static void main(String[] args) {

        int[] arr = {12, 23, 131, 34, 15, 22};
        extremePrint(arr);

    }
}
