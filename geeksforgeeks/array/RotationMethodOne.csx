using System; 
  
class RotationMethodOne { 
    /* Function to left rotate arr[] 
    of size n by d*/
    static void leftRotate(int[] arr, int d, 
                           int n) 
    { 
        for (int i = 0; i < d; i++) 
            leftRotatebyOne(arr, n); 
    } 
  
    static void leftRotatebyOne(int[] arr, int n) 
    { 
        int i, temp = arr[0]; 
        for (i = 0; i < n - 1; i++) 
            arr[i] = arr[i + 1]; 
  
        arr[i] = temp; 
    } 
  
    /* utility function to print an array */
    static void printArray(int[] arr, int size) 
    { 
        for (int i = 0; i < size; i++) 
            Console.Write(arr[i] + " "); 
    } 
  
    // Driver code 
    public static void Main() 
    { 
        int[] arr = { 1, 2, 3, 4, 5, 6, 7 }; 
        leftRotate(arr, 2, 7); 
        printArray(arr, 7); 
    } 
} 
  