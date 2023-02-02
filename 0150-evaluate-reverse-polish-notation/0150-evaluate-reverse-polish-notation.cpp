class Solution {
public:
    int evalRPN(vector<string>& s) {
        stack<int> st;
        
        for(int i=0;i<s.size();i++){
          if(s[i]!="+" && s[i]!="-" && s[i]!="*" && s[i]!="/"){
            int x = stoi(s[i]);
            st.push(x);
          }
          else{
            int op2=st.top();
            st.pop();
            int op1=st.top();
            st.pop();
            
            if(s[i]=="+"){
              int x = op1+op2;
              st.push(x);
            }
            else if(s[i]=="-"){
              int x = op1-op2;
              st.push(x);
            }
            else if(s[i]=="*"){
              int x = op1*op2;
              st.push(x);
            }
            else if(s[i]=="/"){
              int x = op1/op2;
              st.push(x);
            }
          }
        }
        return st.top();
    }
};