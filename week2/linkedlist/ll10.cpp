/* 
https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/
 */

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
    Node* head = NULL;
    Node* cur = head;
    while (head1!=NULL && head2!=NULL) {
        if (head1->data < head2->data) {
            head1 = head1->next;
        }
        else if(head1->data > head2->data) {
            head2 = head2->next;
        }
        else {
            if (cur==NULL) {
                cur = new Node(head1->data);
                head = cur;
            }
            else {
                cur->next = new Node(head1->data);
                cur = cur->next;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
    }
    return head;
}