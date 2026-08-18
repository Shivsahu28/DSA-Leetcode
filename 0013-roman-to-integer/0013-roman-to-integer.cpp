class Solution {
public:
    int romanToInt(string s) {
        map<char,int>mp;
        mp['I']= 1;// create krdiye key value pairs.
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;

        int sum=0;// initialize total sum.
        for(int i=0;i<s.size();i++){//loop
            if(mp[s[i]]>mp[s[i+1]]){//comparisons
                sum+= mp[s[i]];
            }else if(mp[s[i]]<mp[s[i+1]]){
                sum-=mp[s[i]];
            }else{
                sum=sum+mp[s[i]];
            }
        }
      return sum;//return
    }
};