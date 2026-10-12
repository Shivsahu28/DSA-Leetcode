class RecentCounter {
public:
queue<int>q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
     if(t-3000<=t) {
        q.push(t);
     }
     while(q.size()>0 && q.front()<t-3000){
        q.pop();
     }
     
     return q.size();
    }
};

