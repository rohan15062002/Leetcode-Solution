class Solution {
public:
    int maxProfit(vector<int>& a) {
       int n = a.size();
       stack<int> s;
       s.push(a[n-1]);
       int maxi = INT_MIN;
       for(int i=n-2;i>=0;i--){
         if(s.top()<a[i]){ 
            s.pop();
            s.push(a[i]);
         }
         else{
         int x = s.top()-a[i];
         maxi = max(x,maxi);
       }
       }
       
       return maxi==INT_MIN?0:maxi;
      
    }
};