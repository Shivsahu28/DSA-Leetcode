class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
      int n=piles.size();
      int st=1;
      int end=*max_element(piles.begin(),piles.end());
      int ans=end;// humesha answer rahega.

      while(st<=end){
        int mid=st+(end-st)/2;

        long long hours=0;//calculate karega kitne hours lega.
        for(int pile:piles){
          hours=hours+(pile+mid-1)/mid;
        }
        if(hours<=h){// mtlb,mil gya aur minimum find kr rhe.
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
      }
      return ans;
    }
};