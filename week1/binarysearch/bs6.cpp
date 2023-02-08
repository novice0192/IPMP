/* 
Check for Majority Element in a sorted array
 */

#include <bits/stdc++.h>
using namespace std;

int left(vector<int>& nums, int low, int high, int target) {
    int lo=low, hi=high;
    int mid;
    while (lo<hi-1) {
        mid = lo + (hi-lo)/2;
        if (nums.at(mid) >= target)
            hi = mid;
        else
            lo = mid;
    }
    return hi;
}

int right(vector<int>& nums, int low, int high, int target) {
    int lo=low, hi=high;
    int mid;
    while (lo<hi-1) {
        mid = lo + (hi-lo)/2;
        if (nums.at(mid) <= target)
            lo = mid;
        else
            hi = mid;
    }
    return lo;
}

int main() {
    vector<int> nums = {1, 1, 1, 2, 2};
    int n = nums.size();
    int lo=0, hi=n-1;
    int mid = lo + (hi-lo)/2;
    int target = nums.at(mid);
    int l = left(nums, -1, n-1, target);
    int r = right(nums, 0, n, target);
    if ((nums.at(l) == target && nums.at(r) == target) && ((r-l+1) > (n/2))) {
        cout << "True " << r-l+1 << " times" << endl;
    }
    else {
        cout << "False " << r-l+1 << " times" << endl;
    }
    return 0;
}
