class Solution {
public:
    bool isPalindrome(ListNode* head) {
        //find the middle element
        ListNode *slow = head;
        ListNode *fast = head;
        //if the no of nodes are even
        while(fast!=NULL && fast->next !=NULL){ 
            slow = slow->next;
            fast = fast->next->next;
        }
        //if the no of nodes are odd then move slow to one point
        if(fast != NULL && fast->next == NULL){
            slow = slow->next;
        }
        //Reverse the end half
        ListNode *prev = NULL;
        ListNode *temp = NULL;
        while(slow != NULL && slow->next != NULL){
            temp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = temp;
        }
        if(slow != NULL){
            slow->next = prev;
        }
        //Compare the start half and end half if found any inequality then return false otherwise return true.
        fast = head;
        while(slow && fast){
            if(slow->val != fast->val){
                return false;
            }
            slow = slow->next;
            fast = fast->next;
        }
        return true;

    }
};