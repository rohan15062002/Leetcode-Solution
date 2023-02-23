class Solution {
public:
    static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        int n=capital.size();
        vector<pair<int,int>> projects(n);
      
        for(int i=0;i<n;i++){
          projects[i]={profits[i],capital[i]};
        }
        
        sort(projects.begin(), projects.end(), sortbysec);
        
        priority_queue<int> pq;
        int i=0;
        while(k--){
          while(i<n && w>=projects[i].second){
            pq.push(projects[i].first);
            i++;
          }
          if(pq.empty()==false){
            w+=pq.top();
            pq.pop();
          }
        }
        return w;
    }
};