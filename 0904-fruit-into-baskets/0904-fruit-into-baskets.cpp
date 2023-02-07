class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       int i=0,j=0;
       map<int,int> m;
       int n=fruits.size();
       int ans = INT_MIN;
       while(j<n){
         m[fruits[j]]++;
         while(m.size()>2){
           m[fruits[i]]--;
           if(m[fruits[i]]==0){
             m.erase(fruits[i]);
           }
           i++;
         }
          if(m.size()<=2){
           ans = max(ans,j-i+1);
           j++;
         }
       }
       return ans;
    }
};