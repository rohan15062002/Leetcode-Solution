class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long high=1e14;
        long long low=0;
        long long mid;
       
        while(low<high){
          mid = low+(high-low)/2;
          long long sum=0;
          for(auto it:time)sum+=(mid/it);
         // cout<<mid<<endl;
          
          if(sum>=totalTrips){
            high=mid;
          }
          else low=mid+1;
        }
        return high;
    }
};