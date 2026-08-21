class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i])!=mp.end()){// found in array twice.
                return true;
            }else{
                mp[nums[i]]=1;
            }
        }
        return false;
    }
};