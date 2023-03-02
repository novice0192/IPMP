/* 
https://practice.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/
 */

class Solution{
    public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)  
    {
        // code here
        vector<long long int> res(2, 0);
        long long int exor=0, i;
        for (i=0; i<N; i++) {
            exor ^= Arr[i];
        }
        exor &= -exor;
        int j=0;
        for (i=0; i<N; i++) {
            if (!(Arr[i]&exor)) {
                swap(Arr[j], Arr[i]);
                j++;
            }
        }
        for (i=0; i<j; i++) {
            res[0] ^= Arr[i];
        }
        for (i=j; i<N; i++) {
            res[1] ^= Arr[i];
        }
        if (res[0]<res[1]) {
            swap(res[0], res[1]);
        }
        return res;
    }
};