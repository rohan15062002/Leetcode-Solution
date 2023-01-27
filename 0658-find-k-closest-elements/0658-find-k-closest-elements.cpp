class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int, int>> pq;
        vector<int> v;
        int n = arr.size();
        for(int i=0;i<n;i++){
            pq.push({abs(arr[i]-x),arr[i]});
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        while(pq.empty()==false){
            pair<int,int> top = pq.top();
            v.push_back(top.second);
            pq.pop();
        }
        
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i=0;i<v.size();i++){
          p.push(v[i]);
        }
        int i=0;
        while(p.empty()!=true){
          v[i]=p.top();
          p.pop();
          i++;
        }
        return v;
    }
};