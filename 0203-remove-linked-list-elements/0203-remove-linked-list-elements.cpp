class Solution{
    public:
    ListNode* removeElements(ListNode* head,int val){
        ListNode dummy(0);
        dummy.next=head;// dummy is nothing a fake node before head.
        ListNode* curr= &dummy;//curr pointing to dummy node.
          while(curr->next!=NULL){
            if(curr->next->val==val){
                curr->next=curr->next->next;//simple if val==curr->next we just skip that node.
            }else{
            curr=curr->next;
            }
          }
          return dummy.next;
    }
};