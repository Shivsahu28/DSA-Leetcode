class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int st=1;
        int end=*max_element(nums.begin(),nums.end());
         int ans=end;
         while(st<=end){
            int mid=st+(end-st)/2;
            
            long long sum=0;
            for(int num:nums){
                sum=sum+(num+mid-1)/mid;
            }
            if(sum<=threshold){// milgya,lekin aur chota dekh skte.
                  ans=mid;
                  end=mid-1;
            }else{
                st=mid+1;
            }
         }
         return ans;
    }
};