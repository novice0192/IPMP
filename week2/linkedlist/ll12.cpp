/* 
https://practice.geeksforgeeks.org/problems/delete-alternate-nodes/
 */

void deleteAlt(struct Node *head){
    // Code here
    struct Node *cur;
    cur = head;
    while (cur && cur->next) {
        cur->next = cur->next->next;
        cur = cur->next;
    }
}