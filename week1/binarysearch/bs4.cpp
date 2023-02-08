/* 
https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
 */

class Solution {
public:
    int search(vector<int>& nums, int low, int high, int n) {
        int lo=low, hi=high;
        int mid, i, tmp;
        if (lo<=hi) {
            mid = lo + (hi-lo)/2;
            i = ((mid-1)%n + n) % n;
            if (nums.at(i) >= nums.at(mid)) {
                return mid;
            }
            tmp = search(nums, lo, mid-1, n);
            if (tmp>-1)
                return tmp;
            tmp = search(nums, mid+1, hi, n);
            if (tmp>-1)
                return tmp;
        }
        return -1;
    }

    int findMin(vector<int>& nums) {
        int n=nums.size();
        int lo=0, hi=n-1;
        int mid, res;
        res = search(nums, 0, n-1, n);
        return nums.at(res);
    }
};