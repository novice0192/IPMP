/* 
https://practice.geeksforgeeks.org/problems/union-of-two-linked-list/
 */

struct Node* makeUnion(struct Node* head1, struct Node* head2)
{
    // code here
    struct Node* head = NULL;
    struct Node* cur = head1;
    set<int> merged;
    while (cur!=NULL) {
        if (merged.find(cur->data)==merged.end()) {
            merged.insert(cur->data);
        }
        cur = cur->next;
    }
    cur = head2;
    while (cur!=NULL) {
        if (merged.find(cur->data)==merged.end()) {
            merged.insert(cur->data);
        }
        cur = cur->next;
    }
    head = new Node(0);
    cur = head;
    for (auto& e: merged) {
        cur->next = new Node(e);
        cur = cur->next;
    }
    return head->next;
}