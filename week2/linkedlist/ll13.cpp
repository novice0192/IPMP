/* 
https://leetcode.com/problems/rotate-list/solutions/
 */

class Solution {
public:
    pair<ListNode*, int> knode(ListNode* head, int k) {
        if (head==NULL)
            return make_pair(head, k-1);
        pair<ListNode*, int> newhead;
        newhead = knode(head->next, k);
        if (newhead.second<0) {
            return make_pair(newhead.first, newhead.second);
        }
        return make_pair(head, newhead.second-1);
    }

    ListNode* rotateRight(ListNode* head, int k) {
        int len=0;
        ListNode* cur = head;
        while (cur!=NULL) {
            len++;
            cur = cur->next;
        }
        if (head==NULL) {
            return head;
        }
        pair<ListNode*, int> newhead = knode(head, k%len);
        cur = newhead.first;
        if (cur==NULL) {
            return head;
        }
        while (cur->next!=NULL) {
            cur = cur->next;
        }
        cur->next = head;
        while (cur->next!=newhead.first) {
            cur = cur->next;
        }
        cur->next = NULL;
        return newhead.first;
    }
};