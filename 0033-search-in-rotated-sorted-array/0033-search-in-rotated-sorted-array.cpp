class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int st=0;
        int end=n-1;
        while(st<=end){
            int mid=st+(end-st)/2;

            if(nums[mid]==target){
                return mid;
            }
             if(nums[st]==target){
                return st;
            } if(nums[end]==target){
                return end;
            }
            // check kro left half sorted hai kya.
            if(nums[st]<=nums[mid]){
                // check kro left half mein lies karega answer.
                    if(nums[st]<=target&&target<nums[mid]){
                       end=mid-1;
                    }else{
                        st=mid+1;
                    }
            }else{// agr right half sorted hai toh.
              if(nums[mid]<target && target<=nums[end]){// lies kar rha answer right half mein ki nahi.
                st=mid+1;
              }else{
                end=mid-1;
              }
            }
        }
        return -1;
    }
};