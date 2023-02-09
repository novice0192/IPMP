/* 
https://www.codingninjas.com/codestudio/problems/ceiling-in-a-sorted-array_1825401
 */

#include <bits/stdc++.h> 
using namespace std;

int ceilingInSortedArray(int n, int x, vector<int> &arr){
    // Write your code here.
    int lo=0, hi=arr.size()-1;
    int mid;
    while (lo<hi) {
        mid = lo + (hi-lo)/2;
        if (arr.at(mid)==x)
            return x;
        if (arr.at(mid) < x)
            lo = mid+1;
        else
            hi = mid;
    }
    if (arr.at(hi) < x)
        return -1;
    return arr.at(hi);
}
