/* 
https://practice.geeksforgeeks.org/problems/counting-sort/
 */

class Solution{
    public:
    //Function to arrange all letters of a string in lexicographical 
    //order using Counting Sort.
    string countSort(string arr){
        // code here
        int count[256], i;
        char res[arr.length()+1];
        for (i=0; i<256; i++) {
            count[i]=0;
        }
        for (i=0; i<arr.length(); i++) {
            count[arr[i]]++;
        }
        for (i=1; i<256; i++) {
            count[i] += count[i-1];
        }
        for (i=arr.length()-1; i>=0; i--) {
            count[arr[i]]--;
            res[count[arr[i]]] = arr[i];
        }
        res[arr.length()] = '\0';
        return string(res);
    }
};
