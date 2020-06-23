#include <iostream>
using namespace std;

int maxSum(int arr[], int n)
{
    int arrSum = 0;
    int currval = 0;
    for(int i = 0; i<n;i++)
    {
        arrSum = arrSum + arr[i];
        currval = currval + (i*arr[i]);
    }
    int maxVal = currval;

    for (int j = 0; j < n; j++)
    {
        currval = currval + arrSum-n*arr[n-j];
        if (currval > maxVal)
            maxVal = currval;
    }
    return maxVal;
}

int main(void)
{
    int arr[] = {10, 1, 2, 3, 4, 5, 6, 7, 8, 9}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "\n max sum is " << maxSum(arr, n);
    return 0;
}