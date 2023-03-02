/* 
https://www.interviewbit.com/problems/next-smallest-palindrome/
 */

string Solution::solve(string A) {
    string res="";
    int i;
    bool flag=false;
    int c=0, s=0;
    s = (int) A[A.size()-1] - 47;
    c = s/10;
    s %= 10;
    res = (char) (s+48);
    for (i=A.size()-2; i>=0; i--) {
        s = c + (int) A[i] - 48;
        c = s/10;
        s %= 10;
        res = (char) (s+48) + res;
    }
    if (c>0)
        res = (char) (c+48) + res;
    int n=res.size();
    for (i=0; i<((n-1)/2); i++) {
        if (res[n-1-i] > res[i]) {
            flag = true;
        }
        else if (flag && (res[n-1-i] < res[i])) {
            flag = false;
        }
        res[n-1-i] = res[i];
    }
    if (res[i] > res[n-1-i]) {
        res[n-1-i] = res[i];
    }
    else if (flag || (res[n-1-i] > res[i])) {
        res[i] += 1;
        if (res[i] == 58) {
            res[i] -= 10;
            res[i-1] += 1;
            res[n-i] = res[i-1];
        }
        res[n-1-i] = res[i];
    }
    return res;
}
