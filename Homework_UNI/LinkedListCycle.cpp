
//The function finds if wether or not there is a NULL pointer
// Complete the has_cycle function below.
bool has_cycle(SinglyLinkedListNode* head) {
    unordered_set<SinglyLinkedListNode*> temp; 
    while (head != NULL) { 
        if (temp.find(head) != temp.end()){
            return true;
        }
        temp.insert(head);
        head = head->next; 
    }
    return false; 
}
