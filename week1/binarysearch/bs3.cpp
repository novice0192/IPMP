/* 
https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 */

class Solution {
public:
    int left(vector<int>& nums, int low, int high, int target) {
        int lo=low, hi=high;
        int mid;
        while (lo<hi-1) {
            mid = lo + (hi-lo)/2;
            if (nums.at(mid) >= target) {
                hi = mid;
            }
            else {
                lo = mid;
            }
        }
        return hi;
    }

    int right(vector<int>& nums, int low, int high, int target) {
        int lo=low, hi=high;
        int mid;
        while (lo<hi-1) {
            mid = lo + (hi-lo)/2;
            if (nums.at(mid) <= target) {
                lo = mid;
            }
            else {
                hi = mid;
            }
        }
        return lo;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> out;
        int leftIn, rightIn;
        if (nums.size()==0) {
            out.push_back(-1);
            out.push_back(-1);
            return out;
        }
        leftIn = left(nums, -1, nums.size()-1, target);
        rightIn = right(nums, 0, nums.size(), target);
        if (nums.at(leftIn)==target) {
            out.push_back(leftIn);
        }
        else {
            out.push_back(-1);
        }
        if (nums.at(rightIn)==target) {
            out.push_back(rightIn);
        }
        else {
            out.push_back(-1);
        }
        return out;
    }
};