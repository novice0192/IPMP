/* 
https://www.hackerrank.com/challenges/print-the-elements-of-a-linked-list-in-reverse/
 */

void reversePrint(SinglyLinkedListNode* llist) {
    if (llist == NULL)
        return;
    reversePrint(llist->next);
    cout << llist->data << "\n";
}