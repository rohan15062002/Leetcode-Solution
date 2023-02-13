class Solution {
public:
    int triangularSum(vector<int>& nums) {
       
      if(nums.size()==1)return nums[0];
      vector<int> v;
      for(int i=1;i<nums.size();i++){
        v.push_back((nums[i-1]+nums[i])%10);
      }
      
      int n = nums.size()-1;
      while(n--){
        vector<int> v1;
        for(int i=1;i<v.size();i++){
          v1.push_back((v[i-1]+v[i])%10);
        }
        v=v1;
      }
      
      return v[0];
    }
};