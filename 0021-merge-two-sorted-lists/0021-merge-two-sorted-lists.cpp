class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
       if(list1==NULL || list2==NULL) {
        return list1==NULL? list2:list1;// thiss means if list1 is null then return list2, otherwise list1.
       }
       if(list1->val<=list2->val){
         list1->next=mergeTwoLists(list1->next,list2);//if condition is true then list1->next will merge so that connection is been stablished.
        return list1;
       }else{
        list2->next=mergeTwoLists(list2->next,list1);
        return list2;
       }
       return 0;
    }
};