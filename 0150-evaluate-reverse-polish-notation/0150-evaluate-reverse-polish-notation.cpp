class Solution{
    public:
    int evalRPN(vector<string>& tokens){
        stack<int>st;
        for(string token:tokens){
            if(token !="+"&&token!="/"// if token is a number
            && token != "*"&& token !="-"){
                st.push(stoi(token));//stoi is used to convert string into int.
            }else{// in case of operator
               int b=st.top();// this is for value initate to b for completing the expression.
               st.pop();

                int a=st.top();
               st.pop();

               if(token=="+"){
                st.push(a+b);
               }
               else if(token=="-"){
                st.push(a-b);
               }
               else if(token=="/"){
                st.push(a/b);
               }
               else{
                st.push(a*b);
               }
            }
        }
        return st.top();
    }
};