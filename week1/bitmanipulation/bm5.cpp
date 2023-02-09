/* 
https://practice.geeksforgeeks.org/problems/rotate-bits4524/
 */

class Solution
{
  public:
        vector <int> rotate (int n, int d)
        {
            //code here.
            vector<int> res;
            int r = 8*sizeof(n);
            d%=16;
            unsigned n1, n2;
            n1 = (n << d) | (n >> (r-d));
            n2 = (n >> d) | (n << (r-d));
            res.push_back(n1);
            res.push_back(n2);
            return res;
        }
};