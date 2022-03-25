
// // Java program to find first and last occurrence of
// // an elements in given sorted array
// import java.io.*;

// /**
//  * jv_49_test_finding_repeated_element_position
//  */
// class jv_49_test_finding_repeated_element_position {

//     // Function for finding first and last occurrence
//     // of an elements
//     public static void findFirstAndLast(int arr[], int x) {
//         int n = arr.length;
//         int first = -1, last = -1;
//         for (int i = 0; i < n; i++) {
//             if (x != arr[i])
//                 continue;
//             if (first == -1)
//                 first = i;
//             last = i;
//         }
//         if (first != -1) {
//             System.out.println("First Occurrence = " + first);
//             System.out.println("Last Occurrence = " + last);
//         } else
//             System.out.println("Not Found");
//     }

//     public static void main(String[] args) {
//         int array[] = { 4, 7, 9, 9, 9, 9, 67, 453, 980 };
//         int x = 9;
//         findFirstAndLast(array, x);
//     }
// }

// Java program to search an element in row-wise
// and column-wise sorted matrix

/**
 * jv_49_test_finding_repeated_element_position
 */
class jv_49_test_finding_repeated_element_position {

    static int search(int[][] mat, int n, int x) {
        if (n == 0)
            return -1;

        // traverse through the matrix
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                // if the element is found
                if (mat[i][j] == x) {
                    System.out.print("Element found at ("
                            + i + ", " + (j+1)
                            + ")\n");
                    return 1;
                }
        }

        System.out.print(" Element not found");
        return 0;
    }

    public static void main(String[] args) {
        int array[][] = { { 10, 20, 30, 40 },
                { 15, 25, 35, 45 },
                { 27, 29, 37, 48 },
                { 32, 33, 39, 50 } };

        search(array, 4, 35);
    }
}
