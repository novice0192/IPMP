/* 
https://leetcode.com/problems/palindrome-linked-list/
 */

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> check;
        ListNode* tmp = head;
        while (tmp != NULL) {
            check.push(tmp->val);
            tmp = tmp->next;
        }
        tmp = head;
        while (tmp != NULL) {
            if (check.top() != tmp->val)
                return false;
            check.pop();
            tmp = tmp->next;
        }
        return true;
    }
};