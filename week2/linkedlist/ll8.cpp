/* 
https://leetcode.com/problems/middle-of-the-linked-list/
 */

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *s, *f;
        if (head==NULL)
            return head;
        s = head;
        f = head->next;
        if (!f)
            return s;
        while (f->next && f->next->next) {
            s = s->next;
            f = f->next->next;
        }
        return s->next;
    }
};