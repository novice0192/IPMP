/* 
https://leetcode.com/problems/reverse-linked-list/
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev, *cur, *tmp;
        prev = NULL;
        cur = head;
        while (cur != NULL) {
            tmp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = tmp;
        }
        return prev;
    }
};