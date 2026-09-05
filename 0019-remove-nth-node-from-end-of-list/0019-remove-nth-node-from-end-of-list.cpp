class Solution{
    public:
    ListNode* removeNthFromEnd(ListNode* head,int n){
        if(head->next==NULL){
            return NULL;
        }
         
         int k=0;//initial size of list.
         ListNode* temp=head;
         while(temp!=NULL){
            temp=temp->next;
            k++;
         }
         ListNode dummy(0);
         dummy.next=head;
         ListNode* curr= &dummy;

         for(int i=0;i<k-n;i++){
            curr=curr->next;// bringing curr to n-1 node.
         }
         curr->next=curr->next->next;//basically deleting Nth node.
         return dummy.next;//returning head.
    }
};