class Solution {
public:
    static bool cmp(const pair<int, string>& a, const pair<int, string>& b){
      if(a.first != b.first) {
            return a.first < b.first;
        }
        return a.second > b.second;
    
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
         map<string,int> m;
        for(auto it:words){
          m[it]++;
        }

        vector<pair<int,string>> v;
        for(auto &it:m){
          v.push_back({it.second,it.first});
        }
        
        sort(v.begin(),v.end(),cmp);
        reverse(v.begin(),v.end());
        vector<string> v1;
        for(int i=0;i<k;i++){
         v1.push_back(v[i].second);
        }
        return v1;
    }
};