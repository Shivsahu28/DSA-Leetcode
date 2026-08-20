class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,char>mp;
        map<char,char>mp1;

        if(s.size() != t.size()){// simple,agr size same nhi hai to isomorphic nhi hoga.
            return false;
        }
        for(int i=0;i<s.size();i++){//loop with s.size because size is same .
         
            if(mp.find(s[i]) != mp.end()){// if found
                if(mp[s[i]]!=t[i]){ // with same char.
                    return false;
                }
            }else{
                mp[s[i]]=t[i];//map the char.
            
            }
            // another map check !
            if(mp1.find(t[i]) != mp1.end()){// if found
                if(mp1[t[i]]!=s[i]){ // with same char.
                    return false;
                }
            }else{
                mp1[t[i]]=s[i];//map the char.
            
            }
        }
        return true;
    }
};