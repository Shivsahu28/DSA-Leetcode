class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return true;
            }

        // 273/285 case [1,0,1,1,1]
        if(nums[st]==nums[mid]&& nums[mid]==nums[end]){
            st++;
            end--;
            continue;
        }
            if(nums[st]<=nums[mid]){//we come to know if left half is sorted.
                if(nums[st]<=target&& target<nums[mid]){//check the target lies in left or not.
                      end=mid-1;
                }else{
                    st=mid+1;
                }
            }
            else{//right half is sorted or not.
               if(nums[mid]<target&& target<=nums[end]){
                st=mid+1;
               }else{
                end=mid-1;
               }
            }
        }
        return false;
    }
};