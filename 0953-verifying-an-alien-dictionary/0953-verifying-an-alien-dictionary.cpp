class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int m[26];
        for(int i=0;i<order.size();i++){
          m[order[i]-'a']=i;
        }
        
        for(int i=0;i<words.size();i++){
          for(int j=i+1;j<words.size();j++){
            int n = min(words[i].size(),words[j].size());
            int temp=0;
            
            for(int k=0;k<n;k++){
              if(m[words[i][k]-'a']>m[words[j][k]-'a'])return false;
              if(m[words[i][k]-'a']<m[words[j][k]-'a'])break;
              else temp++;
            }
            
            if(temp==words[j].size() && temp<words[i].size())return false;
          }
        }
        return true;
    }
};