class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if (head==NULL) {
            return NULL;
        }
        ListNode* temp = head;
        int count = 0;
        while (temp != NULL) {
            count++;
            temp = temp->next;
        }
        int delPos=count-n;
        //if to delete head position
        if (delPos==0) {
            ListNode* newHead = head->next;
            delete head;
            return newHead;
        }
        ListNode* current = head;
        for (int i = 1; i < delPos; i++) {
            current = current->next;
        }
        ListNode* nodeToDelete = current->next;
        current->next = nodeToDelete->next;
        delete nodeToDelete;
        return head;
    }
};
