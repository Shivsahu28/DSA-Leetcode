class Solution {
public:
    int lengthOfLastWord(string s) {
       int n=s.size();
       int end=n-1;
       while(end>=0&& s[end]==' '){
        end--;
       }

       int count=0;
       while(end>=0&& s[end]!=' '){
        count ++;
        end--;
       }
       return count;
    }
};