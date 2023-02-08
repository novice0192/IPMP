/* 
https://leetcode.com/problems/search-in-rotated-sorted-array/
 */

class Solution {
public:
    int pivot(vector<int>& nums, int low, int high) {
        int lo=low, hi=high;
        int mid, n=nums.size();
        while (lo < (hi-1)) {
            mid = lo + (hi-lo)/2;
            if (nums.at(mid) > nums.at(hi))
                lo = mid;
            else
                hi = mid;
        }
        return lo;
    }

    int search(vector<int>& nums, int low, int high, int target) {
        int lo=low, hi=high;
        int mid;
        if (lo<hi)
            if (nums.at(lo) > target || nums.at(hi) < target)
                return -1;
        while (lo <= hi) {
            mid = lo + (hi-lo)/2;
            if (nums.at(mid)==target)
                return mid;
            if (nums.at(mid) < target)
                lo = mid+1;
            else
                hi = mid-1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pvt = pivot(nums, 0, n-1);
        int left = search(nums, 0, pvt, target);
        int right = search(nums, pvt+1, n-1, target);
        return max(left, right);
    }
};