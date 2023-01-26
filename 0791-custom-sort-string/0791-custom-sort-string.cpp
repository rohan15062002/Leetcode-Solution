class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> v(26,0);
        for(int i=0;i<s.size();i++){
          v[s[i]-'a']++;
        }
        
        vector<int>v1(26,0);
        for(int i=0;i<order.size();i++){
          v1[order[i]-'a']++;
        }
        
        string str="";
        for(int i=0;i<order.size();i++){
            int x=0;
            if(v[order[i]-'a']!=0 && v1[order[i]-'a']!=0){
              x = v[order[i]-'a'];
            }
           string st;
           st.insert(0,x,order[i]);
           str+=st;
           v[order[i]-'a']=0;
        }
        
        for(int i=0;i<26;i++){
          int x=0;
          string st;
          if(v[i]!=0){
            x=v[i];
          }
          st.insert(0,x,'a'+i);
          str+=st;
        }
        return str;
    }
};