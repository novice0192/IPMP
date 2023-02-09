/* 
https://leetcode.com/problems/number-of-1-bits/
 */

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res=0;
        for (; n; n>>=1) {
            res += n&1;
        }
        return res;
    }
};