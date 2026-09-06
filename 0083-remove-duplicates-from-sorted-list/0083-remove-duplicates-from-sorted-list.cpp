class Solution{
    public:
    ListNode* deleteDuplicates(ListNode* head){
        ListNode dummy(0);
        dummy.next=head;
        ListNode* curr=dummy.next;

        while(curr !=NULL && curr->next != NULL){
            if(curr->val==curr->next->val){
                curr->next=curr->next->next;
                
            }else{
                curr=curr->next;
             }
        }
        return dummy.next;
    }
};