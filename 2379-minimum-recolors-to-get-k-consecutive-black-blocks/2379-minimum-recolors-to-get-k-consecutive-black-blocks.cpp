class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int len = blocks.size();
        int win = k;
        int mini = INT_MAX;
        int i=0,j=0;
        map<char,int> m;
        while(j<win){
          m[blocks[j]]++;
          j++;
        }
        j--;
        while(j<len){
          if(j-i+1==win){
            mini=min(mini,m['W']);
            m[blocks[i]]--;
            i++;
          }
          if(j!=len){
            j++;
            m[blocks[j]]++;
            
          }
        }
        return mini;
    }
};