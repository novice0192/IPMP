/* 
https://leetcode.com/problems/next-greater-element-iii/description/
 */

class Solution {
public:
    int nextGreaterElement(int n) {
        unsigned int num=n, tmp;
        vector<int> arr;
        while (num) {
            tmp = num%10;
            arr.insert(arr.begin(), tmp);
            num /= 10;
        }
        int i, j;
        j = arr.size()-1;
        i = j-1;
        while (i>=0 && arr[i]>=arr[i+1]) {
            i--;
        }
        if (i<0) {
            return -1;
        }
        int t = j-1;
        while (t>i) {
            if (arr[j]<=arr[i])
                j = t;
            if ((arr[t]>arr[i]) && (arr[t]<arr[j]))
                j = t;
            t--;
        }
        if (arr[j]<arr[i]) {
            return -1;
        }
        swap(arr[i], arr[j]);
        i++;
        sort(arr.begin()+i, arr.end());
        for (auto& d: arr) {
            num = num*10 + d;
        }
        if (num>INT_MAX || num<n)
            return -1;
        return num;
    }
};