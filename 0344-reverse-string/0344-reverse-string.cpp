class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> res;
        int n=s.size();
        int st=0;
        int end=n-1;
         while(st<end){
            swap(s[st],s[end]);
            st++;
            end--;
         }
    }
};