class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
       int high=arr.size();
       int low=0;
       int mid;
      
       while(low<high){
         mid = low+(high-low)/2;
         if(arr[mid]-mid<=k)low=mid+1;
         else high=mid;
       }
       return low+k;
    }
};