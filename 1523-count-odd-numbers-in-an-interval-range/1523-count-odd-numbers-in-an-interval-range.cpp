class Solution {
public:
    int countOdds(int low, int high) {
        if(low%2==1 && high%2==1){
          int ans = (high-low)/2;
          return ans+1;
        }
        if(low%2==1 && high%2==0){
          int ans = (high-low)/2;
          return ans+1;
        }
        if(low%2==0 && high%2==0){
          int ans = (high-low)/2;
          return ans;
        }
        if(low%2==0 && high%2==1){
          int ans = (high-low)/2 + 1;
          return ans;
        }
        return 0;
    }
};