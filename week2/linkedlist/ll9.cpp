/* 
https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *ca=headA, *cb=headB;
        int a, b=a=0;
        while (ca) {
            ca = ca->next;
            a++;
        }
        while (cb) {
            cb = cb->next;
            b++;
        }
        ca = headA;
        cb = headB;
        if (a>b) {
            a -= b;
            while (a) {
                ca = ca->next;
                a--;
            }
        }
        else {
            b -= a;
            while (b) {
                cb = cb->next;
                b--;
            }
        }
        while (ca!=cb) {
            ca = ca->next;
            cb = cb->next;
        }
        return ca;
    }
};