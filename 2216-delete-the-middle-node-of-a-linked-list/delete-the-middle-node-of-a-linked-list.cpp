class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next == NULL) {
            delete head;
            return NULL;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* prev=NULL;
        while (fast!= NULL && fast->next!=NULL) {
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        prev->next = slow->next;
        delete slow;
        return head;
    }
};
