/* 
https://practice.geeksforgeeks.org/problems/alone-in-couple5507/1
 */

class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        int res=0;
        for (int i=0; i<N; i++) {
            res ^= arr[i];
        }
        return res;
    }
};