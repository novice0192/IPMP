/* 
https://leetcode.com/problems/single-number-iii/
 */

class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> res(2, 0);
        long int exor=0;
        for (auto& e: nums) {
            exor ^= e;
        }
        exor &= -exor;
        int i, j=0;
        for (i=0; i<nums.size(); i++) {
            if ((nums[i]&exor)==0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        for (i=0; i<j; i++) {
            res[0] ^= nums[i];
        }
        for (i=j; i<nums.size(); i++) {
            res[1] ^= nums[i];
        }
        return res;
    }
};