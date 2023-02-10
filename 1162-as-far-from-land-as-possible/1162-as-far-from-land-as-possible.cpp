class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n=grid[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> visited;
      
        for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
            if(grid[i][j]==1){
              q.push({i,j});
            }
          }
        }
        if(q.size()==0 || q.size()==n*n){
          return -1;
        }
      
        int distance=-1;
      
        int r[4]={ -1, 0, 1, 0 };
        int c[4]={ 0, 1, 0, -1 };
      
        while(q.empty()==false){
          int size=q.size();
          while(size--){
            pair<int,int> curr = q.front();
            int x = curr.first;
            int y = curr.second;
            q.pop();
            for(int i=0;i<4;i++){
              int x1=x+r[i];
              int y1=y+c[i];
              
              if(x1>=0 && x1<n && y1>=0 && y1<n && grid[x1][y1]==0){
                q.push({x1,y1});
                grid[x1][y1]=1;
              }
            }
          }
          distance++;
        }
        return distance;
    }
};