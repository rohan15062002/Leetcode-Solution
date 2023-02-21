class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // 1 1 2 3 3 4 4 8 8
       //  0 1 2 3 4 5 6 7 8
      int low=0,high=nums.size()-1;
      while(low<high){
        int mid = low + (high-low)/2;
        if((mid%2==1 and nums[mid]==nums[mid-1])|| (mid%2==0 and nums[mid]==nums[mid+1])){
          low=mid+1;
        }
        
        else{
          high=mid;
        }}
        return nums[high];
    }
};

// 3 3 7 7 10 11 11
// 0 1 2 3 4  5  6