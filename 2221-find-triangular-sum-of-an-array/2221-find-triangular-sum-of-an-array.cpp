class Solution {
public:
    int triangularSum(vector<int>& nums) {
       
      if(nums.size()==1)return nums[0];
      
      int n = nums.size();
      while(n--){
        vector<int> v;
        for(int i=1;i<nums.size();i++){
          v.push_back((nums[i-1]+nums[i])%10);
        }
        nums=v;
      }
      
      return nums[0];
    }
};