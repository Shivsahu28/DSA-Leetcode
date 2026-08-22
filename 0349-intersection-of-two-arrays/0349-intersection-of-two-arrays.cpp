class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1(nums1.begin(),nums1.end());//unique element store karega s1 ke.
        set<int> s2(nums2.begin(),nums2.end());//unique element store karega s2 ke.

        vector<int>res;
        for( int x: s1){
            if(s2.find(x)!=s2.end()){// exist krta hai s1 ka element s2  mein.
              res.push_back(x);
            }
        }
        return res;
    }
};