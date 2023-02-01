class Solution {
public:
    string gcdOfStrings(string s1, string s2) {
        while(true){
          if(s1+s2!=s2+s1)return "";
          if(s1==s2)return s1;
          if(s1.size()>s2.size()){
            s1 = s1.substr(s2.size());
          }
          if(s2.size()>s1.size()){
            s2=s2.substr(s1.size());
          }
        }
        return "";
    }
};