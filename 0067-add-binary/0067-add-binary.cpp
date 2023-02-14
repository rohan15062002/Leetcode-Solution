class Solution {
public:
    string addBinary(string a, string b) {
       reverse(a.begin(),a.end());
       reverse(b.begin(),b.end());
       string ans="";
       int i=0,j=0;
       int carry=0;
      
       while(i<a.size() && j<b.size()){
         int sum = (a[i]-'0')+(b[j]-'0')+carry;
         if(sum>=2){
           carry=1;
         }else carry=0;
         
         ans+=(sum%2+'0');
         i++;
         j++;
       }
       
       if(i!=a.size()){
         while(i<a.size()){
         int sum = (a[i]-'0')+carry;
         if(sum>=2){
           carry=1;
         }else carry=0;
         
         ans+=(sum%2+'0');
         i++;
         }
       }
      else{
        while(j<b.size()){
         int sum = (b[j]-'0')+carry;
         if(sum>=2){
           carry=1;
         }else carry=0;
         
         ans+=(sum%2+'0');
         j++;
         }
      }
    
    if(carry!=0){
      ans+=(carry+'0');
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }
};