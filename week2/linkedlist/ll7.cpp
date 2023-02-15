/* 
https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/
 */

class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node *s, *f;
        if (head==NULL)
            return;
        s = head;
        f = head->next;
        while (f && f->next && s!=f) {
            s = s->next;
            f = f->next->next;
        }
        if (s!=f)
            return;
        while (head != s->next) {
            head = head->next;
            s = s->next;
        }
        s->next = NULL;
    }
};