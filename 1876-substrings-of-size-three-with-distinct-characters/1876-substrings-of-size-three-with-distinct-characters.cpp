class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt=0;
        int i=0,j=0;
        map<char,int> m;
        int n=s.size();
        while(j<n){
          m[s[j]]++;
          if(j-i+1<3){
            j++;
          }
          else{
            if(m.size()==3)cnt++;
            m[s[i]]--;
            if(m[s[i]]==0){
              m.erase(s[i]);
            }
            i++;
            j++;
          }
        }
        return cnt;
    }
};