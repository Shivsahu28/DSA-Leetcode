class StockSpanner {
public:
    vector<int> prices;
    stack<int> st;
    int day = 0;

    StockSpanner() {
        
    }
    
    int next(int price) {
        int span = 1;

        // Remove previous prices smaller than or equal to current price
        while(!st.empty() && prices[st.top()] <= price) {
            st.pop();
        }

        // Calculate span
        if(st.empty()) {
            span = day + 1;
        }
        else {
            span = day - st.top();
        }

        // Store today's price
        prices.push_back(price);

        // Store today's index
        st.push(day);

        day++;

        return span;
    }
};

