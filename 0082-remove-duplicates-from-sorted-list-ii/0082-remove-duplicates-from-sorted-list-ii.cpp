class Solution{
    public:
    ListNode* deleteDuplicates(ListNode* head){
        ListNode dummy(0);
        dummy.next=head;
        ListNode* curr=&dummy;
        while(curr->next!=NULL && curr->next->next!=NULL){

        if(curr->next->val==curr->next->next->val){
            int duplicate= curr->next->val;
       
        while(curr->next!=NULL && curr->next->val==duplicate){
            curr->next=curr->next->next;
        }
        }
        else{
            curr=curr->next;
        }
        }
        return dummy.next;
    }
};