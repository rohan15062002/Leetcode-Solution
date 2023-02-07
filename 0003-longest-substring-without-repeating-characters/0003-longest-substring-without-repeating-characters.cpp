class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int i=0,j=0;
        int n = s.size();
        int ans=INT_MIN;
        map<char,int> m;
        while(j<n){
          m[s[j]]++;
          while(m[s[j]]>1){
            m[s[i]]--;
            i++;
          }
          if(m[s[j]]<=1) {
            ans = max(ans,j-i+1);
            j++;
          }
        }
        return ans;
    }
};