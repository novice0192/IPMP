/* 
https://leetcode.com/problems/delete-node-in-a-linked-list/
 */

class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        ListNode* tmp = node->next;
        node->next = node->next->next;
        tmp->next = NULL;
    }
};