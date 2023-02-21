class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int left=0,right=0;
        int sum=0;
        double maxi=INT_MIN;
        int len=nums.size();
        while(right<k){
          sum+=nums[right];
          right++;
        }
        //maxi=(sum*1.0)/k;
        if(len==1){
          maxi=(sum*1.0)/k;
          return maxi;
        }
        right--;
        while(right!=len){
          if(right-left+1==k){
             double ans =(sum*1.0)/k;
             maxi=max(ans,maxi);
             sum-=nums[left];
             left++;
          }
          else {
            right++;
            sum+=nums[right];
          }
        }
        return maxi;
    }
};