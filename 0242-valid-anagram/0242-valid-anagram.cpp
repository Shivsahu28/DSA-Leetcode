class Solution {
public:
    bool isAnagram(string s, string t) {
      int n=s.size();
      int k=t.size();

      if(n!=k){
        return false;
      }
      map<char,int>mp,mk;

      for(char c:s){
        mp[c]++;
      }
      for(char c:t){
        mk[c]++;
      }
      if(mp==mk){
        return true;
      }
      return false;
    }
};