class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
       priority_queue<int> pq;
       int mini=INT_MAX;
       for(auto it:nums){
         if(it%2==1){
           it*=2;
           pq.push(it);
         }else pq.push(it);
         mini=min(mini,it);
       }
       
       int maxi=pq.top();
       int ans=maxi-mini;
       while(1){
         if(pq.top()%2==1){
           break;
         }
         else{
           int x = pq.top();
           x/=2;
           pq.pop();
           pq.push(x);
           mini=min(mini,x);
           maxi=pq.top();
           ans=min(ans,maxi-mini);
         }
       }
       maxi=pq.top();
       ans=min(ans,maxi-mini);
       return ans;
    }
};