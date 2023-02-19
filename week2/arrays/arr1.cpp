/* 
https://www.interviewbit.com/problems/intersection-of-sorted-arrays/
 */

vector<int> Solution::intersect(const vector<int> &A, const vector<int> &B) {
    vector<int> inter;
    int i=0, j=0;
    while (i<A.size() && j<B.size()) {
        if (A[i] < B[j]) {
            i++;
        }
        else if (A[i] > B[j]) {
            j++;
        }
        else {
            inter.push_back(A[i]);
            i++;
            j++;
        }
    }
    return inter;
}

/* 
https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/
 */

class Solution{
    public:
    //arr1,arr2 : the arrays
    // n, m: size of arrays
    //Function to return a list containing the union of the two arrays. 
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        vector<int> res;
        int i=0, j=0;
        if (arr1[i] < arr2[j]) {
            res.push_back(arr1[i]);
            i++;
        }
        else {
            res.push_back(arr2[j]);
            j++;
        }
        while (i<n && j<m) {
            if (arr1[i]<arr2[j]) {
                if (res.back() != arr1[i]) {
                    res.push_back(arr1[i]);
                }
                i++;
            }
            else if (arr2[j]<arr1[i]) {
                if (res.back() != arr2[j]) {
                    res.push_back(arr2[j]);
                }
                j++;
            }
            else {
                if (res.back() != arr2[j]) {
                    res.push_back(arr2[j]);
                }
                j++; i++;
            }
        }
        while (i<n) {
            if (res.back() != arr1[i]) {
                res.push_back(arr1[i]);
            }
            i++;
        }
        while (j<m) {
            if (res.back() != arr2[j]) {
                res.push_back(arr2[j]);
            }
            j++;
        }
        return res;
    }
};
