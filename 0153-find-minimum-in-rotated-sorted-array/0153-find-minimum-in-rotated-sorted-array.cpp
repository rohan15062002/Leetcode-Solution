class Solution {
public:
     int binarySearch(vector<int>& nums){
      int low = 0;
      int high= nums.size()-1;
      int mid;
      int n = nums.size()-1;
      while(low<high){
        mid = low+(high-low)/2;
        if(mid<n && nums[mid]>nums[mid+1])return mid;
        if(mid!=0 && nums[mid]<nums[mid-1])return mid-1;
        else if(nums[mid]<=nums[low])high=mid-1;
        else low=mid+1;
      }
      return -1;
    }
    int findMin(vector<int>& nums) {
        int pivot = binarySearch(nums);
       // if(pivot==nums.size()-1)return nums[0];
        return nums[pivot+1];
    }
};