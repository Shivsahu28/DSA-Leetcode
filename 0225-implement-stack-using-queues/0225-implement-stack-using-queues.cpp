class MyStack {
public:
   queue<int>q1;
   queue<int>q2;
    MyStack() {
       
    }
    
    void push(int value) {
       while(!q1.empty()){//q1 ke element q2 mein push
        q2.push(q1.front());
        q1.pop();
       }
       q1.push(value);// push kro value.
       while(!q2.empty()){//q2 ke element wapas q1 queue mein.
        q1.push(q2.front());
        q2.pop();
       }
    }
    
    int pop() {
         int ans=q1.front();
        q1.pop();
        return ans;
    }
    
    int top() {
       return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

