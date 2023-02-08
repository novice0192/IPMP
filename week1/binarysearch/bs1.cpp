/*
https://leetcode.com/problems/binary-search/
*/

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid;
        while (lo <= hi) {
            mid = (lo+hi) / 2;
            if (target == nums.at(mid)) {
                return mid;
            }
            else if (target < nums.at(mid)) {
                hi = mid - 1;
            }
            else {
                lo = mid + 1;
            }
        }
        return -1;
    }
};