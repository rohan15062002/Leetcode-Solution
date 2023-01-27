class Solution {
public:
    string frequencySort(string s) {
        map<char,int> m;
        for(auto it:s){
          m[it]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it:m){
          pq.push({it.second,it.first});
        }
        string str="";
        while(pq.empty()!=true){
          str += string(pq.top().first,pq.top().second);
          pq.pop();
        }
        return str;
    }
};