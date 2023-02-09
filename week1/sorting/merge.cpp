/* 
https://practice.geeksforgeeks.org/problems/merge-sort/
 */

class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         int tarr[r-l+1];
         int i, j;
         i = l; j = m+1;
         int k=0;
         while (i <=m && j <= r) {
             if (arr[i] < arr[j]) {
                 tarr[k] = arr[i];
                 i++;
                 k++;
             }
             else {
                 tarr[k] = arr[j];
                 j++;
                 k++;
             }
         }
         while (i<=m) {
             tarr[k] = arr[i];
             i++;
             k++;
         }
         while (j<=r) {
             tarr[k] = arr[j];
             j++;
             k++;
         }
         for (k=0; k<r-l+1; k++) {
             arr[k+l] = tarr[k];
         }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if (l>=r) {
            return;
        }
        int mid = l + (r-l)/2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid+1, r);
        merge(arr, l, mid, r);
    }
};