class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=0,high=0;
        for(auto it:weights){
          low=max(low,it);
          high+=it;
        }
      
        
        int mid;
        while(low<high){
          mid=low+(high-low)/2;
          int day=1,curr=0;
          for(int i=0;i<weights.size();i++){
           if(curr+weights[i]>mid){
             day++;
             curr=0;
           }
           curr+=weights[i];
          }
          
          if(day>days)low=mid+1;
          else high=mid;
          
        }
        return low;
    }
};