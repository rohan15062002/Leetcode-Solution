class Solution {
public:
    int strStr(string s, string n) {
      
      if(s.size()<n.size())return -1;
      auto it=s.find(n);
      return it;
        
      
        
    }
};