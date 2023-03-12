class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<long long int,int> s;
        long long curr=0;
        int cnt=0;
        for(int i=0;i<nums.size();i++){
          curr+=nums[i];
          if(curr==k)cnt++;
          if(s.find(curr-k)!=s.end())cnt+=s[curr-k];
          s[curr]++;
        }
        return cnt;
    }
};