/* 
https://leetcode.com/problems/shortest-unsorted-continuous-subarray/
 */

class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int mine, maxe, n = nums.size();
        int s, e;
        if (n == 1) {
            return 0;
        }
        for (s=0; s<n-1; s++) {
            if (nums[s] > nums[s+1]) {
                break;
            }
        }
        if (s == n-1)
            return 0;
        for (e=n-1; e>0; e--) {
            if (nums[e] < nums[e-1]) {
                break;
            }
        }

        mine = *min_element(nums.begin()+s+1, nums.begin()+e+1);
        maxe = *max_element(nums.begin()+s, nums.begin()+e);
        while ((e<n-1) && (maxe > nums[e+1])) {
            e++;
        }
        while ((s>0) && (mine < nums[s-1])) {
            s--;
        }
        return e-s+1;
    }
};