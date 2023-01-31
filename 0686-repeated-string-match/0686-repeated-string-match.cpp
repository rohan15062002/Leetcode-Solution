class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int cnt=1;
        string s=a;
        while(a.size()<b.size()){
            a+=s;
            cnt++;
        }
        
        if(a.find(b)!=-1)return cnt;
        a+=s;
        cnt++;
        if(a.find(b)!=-1)return cnt;
        return -1;
    }
};