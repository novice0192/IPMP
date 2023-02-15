/* 
https://leetcode.com/problems/remove-nth-node-from-end-of-list/
 */

class Solution {
public:
    pair<ListNode*, int> remove(ListNode* head, int n) {
        pair<ListNode*, int> res;
        if (head==NULL) {
            return make_pair(head, n-1);
        }
        res = remove(head->next, n);
        if (res.second == 0) {
            return make_pair(res.first, -1);
        }
        head->next = res.first;
        return make_pair(head, res.second-1);
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        pair<ListNode*, int> res;
        res = remove(head, n);
        return res.first;
    }
};