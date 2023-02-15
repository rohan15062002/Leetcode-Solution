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
  
    vector<int> addToArrayForm(vector<int>& num, int k) {
        string s="";
        for(int i=0;i<num.size();i++){
          s.push_back(num[i]+'0');
        }
        
        string s1="";
        while(k){
          s1.push_back(k%10 +'0');
          k/=10;
        }
        reverse(s1.begin(),s1.end());
        string str = addStrings(s,s1);
        
        vector<int> v;
        for(int i=0;i<str.size();i++){
          v.push_back((int)str[i]-48);  
        }
        return v;
    }
};