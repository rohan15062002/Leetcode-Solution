class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n =arr.size();
        unordered_map<int,vector<int>>m;
        for(int i=0;i<arr.size();i++){
          m[arr[i]].push_back(i);
        }
        
        int steps=0;
        vector<bool> visited(n,false);
        visited[0]=true;
        queue<int> q;
        q.push(0);
        
        while(q.empty()==false){
          int size=q.size();
          while(size--){
            int front=q.front();
            q.pop();
            
            if(front==n-1)return steps;
            
            //jahan ja skte hai ush value se 
            vector<int>&next=m[arr[front]];
            
            next.push_back(front+1);
            next.push_back(front-1);
            
            for(auto &it:next){
              if(it>=0 && it<=n && visited[it]==false){
                visited[it]=true;
                q.push(it);
              }
            }
            m[arr[front]].clear();
          }
          steps++;
        }
        return steps;
    }
};