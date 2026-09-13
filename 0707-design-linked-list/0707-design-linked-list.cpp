class MyLinkedList{
    public:
     struct ListNode {
        int val;
        ListNode* next;
        ListNode* prev;

        ListNode(int x) {
            val = x;
            next = NULL;
            prev = NULL;
        }
    };
    ListNode*head;
    ListNode*tail;
    int size;
       MyLinkedList(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    int get(int index){
       
        if(index<0|| index>=size){
            return -1;
        }
        ListNode* curr=head;
        
        for(int i=0;i<index;i++){
                curr=curr->next;
        }
        
        return curr->val;
    }
    void addAtHead(int val){
        ListNode* newNode=new ListNode(val);
        if(head==NULL){
            head=newNode;
            tail=newNode;
        }else{
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
        size++;
    }
    void addAtTail(int val){
        ListNode* newNode=new ListNode(val);
        if(tail==NULL){
            tail=newNode;
            head=newNode;
        }else{
           newNode->prev=tail;
           tail->next=newNode;
           tail=newNode;
        }
        size++;
    }
    void addAtIndex(int index,int val){
     
        if(index==0){
            addAtHead(val);
            return;
        }if(index<0|| index>size){
            return;
        }
        if(index==size){
            addAtTail(val);
            return;
        }
           ListNode* newNode=new ListNode(val);
         ListNode*curr=head;
        for(int i=0;i<index;i++){
            curr=curr->next;
        }
        newNode->next=curr;
        newNode->prev=curr->prev;

        curr->prev->next=newNode;
        curr->prev=newNode;

        size++;
    }
    void deleteAtIndex(int index){
      if(index<0|| index>=size){
        return;
      }
       if(head==tail){
        delete head;
        head=NULL;
        tail=NULL;
        size--;
        return;
      }
      if(index==0){
        ListNode*curr=head;
        head=head->next;
        head->prev=NULL;
        delete curr;
        size--;
        return;
      }
     
      if(index==size-1){
        ListNode*curr=tail;
        tail=tail->prev;
        tail->next=NULL;
        delete curr;
        size--;
        return;
      }
      ListNode*curr=head;
      for(int i=0;i<index;i++){
        curr=curr->next;
      }
      curr->prev->next=curr->next;
      curr->next->prev=curr->prev;
      delete curr;

      size--;
    }

};
  