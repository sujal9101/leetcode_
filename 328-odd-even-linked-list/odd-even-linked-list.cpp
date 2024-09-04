class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *odd = head;
        ListNode *even = head->next;
        ListNode *even_start = head->next;
        
        while(odd->next!=NULL && even->next!=NULL){
            odd->next = even->next; //Connect all odds
            even->next = odd->next->next;  //Connect all evens
            odd = odd->next;
            even = even->next;
        }
        odd->next = even_start;   //Place the first even node after the last odd node.
        return head; 
    }
};