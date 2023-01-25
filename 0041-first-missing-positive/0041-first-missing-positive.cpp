class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set<int> s;
        for(auto it:nums){
          if(it>0)s.insert(it);
        }
        vector<int> v(s.begin(),s.end());
      
        for(int i=0;i<v.size();i++){
          if(v[i]!=i+1)return i+1;
        }
        return v.size()+1;
        
    }
};