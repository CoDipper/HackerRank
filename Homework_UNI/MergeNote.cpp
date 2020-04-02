//The function returns the data in the note that links two pointers
// Complete the findMergeNode function below.
int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    set<SinglyLinkedListNode*> mySet; 
    while (head1 != NULL) { 
        mySet.insert(head1);
        head1 = head1->next; 
    } 
    while (head2 != NULL) { 
        if (mySet.find(head2)!=mySet.end()) { 
            return head2->data; 
        } 
        head2 = head2->next; 
    } 
    return 0;
}
