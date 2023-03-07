class Solution {
public:
    int mySqrt(int x) {
      int low=0,high=x;
      long long int mid;
      while(low<=high){
        mid=low+(high-low)/2;
        long long ans=mid*mid;
        if(ans==x)return mid;
        else if(ans>x)high=mid-1;
        else low=mid+1;
        
      }
      return high;
    }
};