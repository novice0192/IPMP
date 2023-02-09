/* 
https://leetcode.com/problems/sort-colors/
 */

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int tmp, i, j;
        for (i=nums.size()-1; i>0; i--) {
            for (j=0; j<i; j++) {
                if (nums[j] > nums[j+1]) {
                    tmp = nums[j+1];
                    nums[j+1] = nums[j];
                    nums[j] = tmp;
                }
            }
        }
    }
};