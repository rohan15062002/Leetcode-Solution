class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int steps=nums[0];
        int maxi=nums[0];
        int jump=1;
      
        if(n<=1)return 0;
        for(int i=1;i<n;i++){
          if(i==n-1 || maxi>=n-1)return jump;
          maxi=max(maxi,nums[i]+i);
          if(maxi>=n-1)return jump+1;
          steps--;
          if(steps==0){
            jump++;
            steps=maxi-i;
          }
        }
        return jump;
    }
};