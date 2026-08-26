class Solution {
public:
    ListNode* middleNode(ListNode* head) {// solving this question by slow-fast pointer.
       ListNode* slow=head;
       ListNode* fast=head;
       while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;// incrementing by 1.
        fast=fast->next->next;//incrementing by 2.
       }
       return slow;
    }
};