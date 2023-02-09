/* 
https://leetcode.com/problems/reverse-bits/
 */

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res=n&1;
        int count = 31;
        for (n>>=1; n; n>>=1) {
            res <<= 1;
            res |= n&1;
            count--;
        }
        res <<= count;
        return res;
    }
};