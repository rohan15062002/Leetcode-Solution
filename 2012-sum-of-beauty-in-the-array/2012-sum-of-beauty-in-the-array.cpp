class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {
        int n=nums.size();
        vector<int> left(n),right(n);
      
        left[0]=nums[0];
        for(int i=1;i<n;i++){
          left[i]=max(nums[i],left[i-1]);
        }
        
        right[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
          right[i]=min(right[i+1],nums[i]);
        }
      
        int sum=0;
        for(int i=1;i<n-1;i++){
          if(nums[i]>left[i-1] && nums[i]<right[i+1])sum+=2;
          else if(nums[i]>nums[i-1] && nums[i]<nums[i+1])sum+=1;
        }
        return sum;
    }
};