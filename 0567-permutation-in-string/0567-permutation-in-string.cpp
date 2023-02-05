class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> a(26,0);
        vector<int> b(26,0);
        int len = s2.size();
        int win = s1.size();
        if(win>len)return false;
        int right=0,left=0;
      
        while(win>right){
            a[s2[right]-'a']++;
            b[s1[right]-'a']++;
            right++;
        }
        right--;
        while(right<len){
          if(a==b)return true;
          right++;
          if(right<len){
            a[s2[right]-'a']++;
          }
          a[s2[left]-'a']--;
          left++;
        }
        return false;
    }
};