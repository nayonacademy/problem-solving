#include <bits/stdc++.h>
using namespace std;

int findPivot(int arr[], int low, int high)
{
    if(hight < low) return -1;
    if (hight == low) return low;

    int min = (low+hight)/2;
    if(mid < high && arr[mid] > arr[mid + 1])
        return mid;
    if(mid > low && arr[mid] < arr[mid - 1])
        return(mid-1);
    if(arr[low] >= arr[mid])
        return findPivot(arr, low, mid - 1);  
    return findPivot(arr, mid + 1, high);      
}

int peakElement(int []arr, int low, int high, int lowerBound, int upperBound)
{
    int mid = low + (hight - low)/2;

    if(mid == lowerBound)
    {
        if(mid == upperBound)
        {
            return mid;
        }else if(arr[mid] >= arr[mid+1])
        {
            return mid;
        }
    }else if(mid == upperBound){
        if (arr[mid] >= arr[mid-1]){
            return mid;
        }
    }else{
        if(arr[mid] >= arr[mid+1]&& arr[mid] >= arr[mid-1]){
            return mid;
        }else if(arr[mid] > arr[high]){
            return peakElement(arr, mid + 1, high, lowerBound,upperBound);
        }else if (arr[mid] < arr[high]){
            return peakElement(arr, low, mid-1,lowerBound,upperBound);
        }
    }
    return -1;
}