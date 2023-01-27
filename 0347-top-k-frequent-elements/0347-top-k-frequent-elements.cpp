class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> m;
        for(auto it:nums){
          m[it]++;
        }
        
         priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        for(auto it:m){
          pq.push({it.second,it.first});
          if(pq.size()>k)pq.pop();
        }
        
        vector<int> v;
        while(pq.empty()==false){
          v.push_back(pq.top().second);
          pq.pop();
        }
        return v;
    }
};