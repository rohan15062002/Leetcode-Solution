class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxi=nums[0];
        int jump=1;
        int steps=0;
      
        if(n<=1)return true;
        if(maxi==0)return false;
      
        for(int i=1;i<n;i++){
          if(i==n-1)return true;
          maxi=max(maxi,nums[i]+i);
          if(maxi>=n-1)return true;
          else if(nums[i]==0 && maxi==i)return false;
          
        }
        return true;
    }
};