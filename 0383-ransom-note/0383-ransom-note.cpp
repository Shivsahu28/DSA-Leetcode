class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
       map<char,int>m1;
       map<char,int>m2;

       for(char c: ransomNote) {// creates map with freq count of char.
         m1[c]++;
       }
       for(char c: magazine) {// creates map with freq count of char.
         m2[c]++;
       }
       for(auto[key,value]:m1){
         if(m2.find(key)==m2.end()  || m2[key]<value){// this checks wheather the key with same value is present or not.
            return false;
         }
       }
       return true;
    }
};