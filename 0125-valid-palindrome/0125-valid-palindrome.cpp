class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        string res;
        for(int i=0;i<n;i++){
           char ch=s[i];
            if(tolower(ch)>='0'&&tolower(ch)<='9' ||tolower(ch)>='a'&&tolower(ch)<='z'){
             res.push_back(tolower(ch));
            }
        }
            int st=0;
            int end=res.size()-1;

            while(st<=end){
                if(res[st]==res[end]){
                    st++;
                    end--;
                }
                else{
                    return false;
                }
            }
            return true;
    }
};