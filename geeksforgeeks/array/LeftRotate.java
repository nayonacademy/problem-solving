import java.io.*;
class LeftRotate {
    static void leftRoate(int arr[], int d)
    {
        if (d ==0)
            return;
        int n = arr.length;
        rvereseArray(arr, 0, d-1);
        rvereseArray(arr, d, n-1);
        rvereseArray(arr, 0, n-1);
    }
    static void rvereseArray(int arr[], int start, int end)
    {
        int temp;
        while(start < end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
    static void printArray(int arr[])
    {
        for(int i=0; i < arr.length; i++)
        {
            System.out.print(arr[i] + " ");
        }
    }
    public static void main(String[] args)
    {
        int arr[] = {1,2,3,4,5,6,7};
        int n = arr.length;
        int d = 2;
        d = d % n;
        leftRoate(arr, d);
        printArray(arr);
    }
}