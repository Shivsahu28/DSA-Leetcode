class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){
            return head;
        }
        ListNode*prev=nullptr;//initialize prev to null.
        ListNode*curr=head;//initialize curr to head.

        while(curr!=NULL){
            ListNode*next=curr->next;//initialize next to curr->next.
            curr->next=prev;//updating prev.
            prev=curr;
            curr=next;
        }
        return prev;//because it will become our new head.
    }
};