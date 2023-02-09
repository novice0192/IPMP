/* 
https://leetcode.com/problems/minimum-bit-flips-to-convert-number/
 */

class Solution {
public:
    int minBitFlips(int start, int goal) {
        int n = start^goal;
        int res = 0;
        while (n) {
            res++;
            n = n&(n-1);
        }
        return res;
    }
};