class Solution {
public:
    string addStrings(string num1, string num2) {
        string str="";
      
        int carry=0;
        int i=num1.size()-1,j=num2.size()-1;
        while(i>=0 and j>=0){
            int sum = (num1[i]-'0')+(num2[j]-'0')+carry;
            carry=sum/10;
            sum=sum%10;
            str += char(sum)+48;
            i--;
            j--;
        }
        while(j>=0){
          str.push_back((num2[j]-'0'+carry)%10 + 48);
          carry = (num2[j]-'0'+carry)/10;
          j--;
        }
       while(i>=0){
          str.push_back((num1[i]-'0'+carry)%10 + 48);
          carry = (num1[i]-'0'+carry)/10;
          i--;
        }
      if(carry!=0){
        str+=char(carry)+48;
      }
      reverse(str.begin(),str.end());
      return str;
    }
    string multiply(string s, string s1) {
      if(s=="0" || s1=="0")return "0";
      int n = max(s.size(),s1.size());
      int n1= min(s.size(),s1.size());
      string ans="";
      vector<string> v;
      reverse(s.begin(),s.end());
      reverse(s1.begin(),s1.end());
      
      
      if(n==s.size()){
        int cnt=0;
        
        for(int i=0;i<n1;i++){
          int carry=0;
          string str="";
          str.append(cnt,'0');
          for(int j=0;j<n;j++){
            int sum = (s[j]-'0')*(s1[i]-'0')+carry;
            carry = sum/10;
            str += (sum%10+'0');  
          }
          cnt++;
          if(carry!=0){
            str+=(carry+'0');
          }
          reverse(str.begin(),str.end());
        //  cout<<str<<endl;
          v.push_back(str);
        }
      }
      
      else{
        int cnt=0;
        
        for(int i=0;i<n1;i++){
          int carry=0;
          string str="";
          str.append(cnt,'0');
          for(int j=0;j<n;j++){
            int sum = (s1[j]-'0')*(s[i]-'0')+carry;
            carry=sum/10;
            str+= (sum%10+'0');
          }
          cnt++;
          if(carry!=0){
            str+=(carry+'0');
          }
          reverse(str.begin(),str.end());
         // cout<<str<<endl;
          v.push_back(str);
        }
      }
      
      //string ans1="";
      ans+=v[0];
      for(int i=1;i<v.size();i++){
         ans = addStrings(v[i],ans);
         //cout<<ans<<endl;
      }
      return ans;
      
      }
};