/* 
https://leetcode.com/problems/linked-list-cycle/
 */

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *s, *f;
        s = head;
        if (head==NULL) {
            return false;
        }
        f = head->next;
        while (f && f->next && s!=f) {
            s = s->next;
            f = f->next->next;
        }
        if (s && f && s==f)
            return true;
        return false;
    }
};