/* 
https://practice.geeksforgeeks.org/problems/insertion-sort/1
 */

class Solution
{
    public:
    void insert(int arr[], int i, int n)
    {
        //code here
        int l=0;
        while (arr[l] < arr[i])
            l++;
        int tmp = arr[i];
        for (int s=i-1; s>=l; s--) {
            arr[s+1] = arr[s];
        }
        arr[l] = tmp;
    }
     public:
    //Function to sort the array using insertion sort algorithm.
    void insertionSort(int arr[], int n)
    {
        //code here
        for (int i=1; i<n; i++) {
            if (arr[i] < arr[i-1]) {
                insert(arr, i, n);
            }
        }
    }
};