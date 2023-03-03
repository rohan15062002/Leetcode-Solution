class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n=arr.size();
        map<int,int> m;
        for(auto it:arr){
          m[it]++;
        }
        if(m.size()==1)return 1;
        priority_queue<int> pq;
        for(auto it:m){
          pq.push(it.second);
        }
        
        int sum=0,cnt=0;
        while(pq.empty()==false){
          sum+=pq.top();
          cnt++;
          pq.pop();
          if(sum>=n/2)return cnt;
          
        }
        return cnt;
    }
};