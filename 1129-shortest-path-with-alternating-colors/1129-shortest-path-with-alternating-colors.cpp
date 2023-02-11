class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
      vector<int> distance(n,-1);
      
      vector<pair<int,int>> adj[n];
      
      for(auto it:redEdges){
        adj[it[0]].push_back({it[1],1});
      }
      for(auto it:blueEdges){
        adj[it[0]].push_back({it[1],2});
      }
      
      queue<vector<int>> q;
      q.push({0,0,-1});
      while(!q.empty()){
          vector<int> curr=q.front();
          q.pop();
          int source=curr[0],color=curr[2];
          
          if(distance[source]==-1){
            distance[source]=curr[1]; //distance
          }
          
          //check it childs
          
          for(auto &it:adj[source]){
            int child=it.first;
            int childEdgeColor=it.second;
            
            if(child!=-1 && (color==-1 || childEdgeColor!=color)){
              q.push({child,curr[1]+1,childEdgeColor});
              it.first=-1;  ///for not visiting it again
            }
          }
        }
      
      return distance;
    }
};