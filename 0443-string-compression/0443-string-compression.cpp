class Solution {
public:
    int compress(vector<char>& s) {
       int i=0,j=0;
       int n=s.size();
       
       string str="";
       int cnt=0;
       while(i<n && j<n){
         if(s[i]==s[j]){
           cnt++;
           j++;
         }
         else{
           if(cnt==1){
             str+=s[i];
           }
           else{
           str+=s[i];
           string st = to_string(cnt);
           str+=st;
           }
           i=j;
           cnt=0;
         }
       }
       if(cnt==1){
         str+=s[i];
         i=j;
       }
      else{
        str+=s[i];
        string st = to_string(cnt);
        str+=st;
        i=j;
      }
      
      for(int i=0;i<str.size();i++){
        s[i]=str[i];
      }
      return str.size();
    }
};