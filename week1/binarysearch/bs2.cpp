/*
https://leetcode.com/problems/search-insert-position/
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int lo=0, hi=nums.size()-1;
        int mid;
        while (lo<hi) {
            mid = lo + (hi-lo)/2;
            if (nums.at(mid) < target)
                lo = mid + 1;
            else
                hi = mid;
        }
        if (nums.at(hi) < target)
            return hi+1;
        return hi;
    }
};
