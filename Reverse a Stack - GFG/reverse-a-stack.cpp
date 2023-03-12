//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void reverse(stack<int>& s,int x){
        if(s.empty()==true){
            s.push(x);
            return;
        }
        int temp=s.top();
        s.pop();
        reverse(s,x);
        s.push(temp);
    }
    void Reverse(stack<int> &s){
        if(s.empty()==true){
            return;
        }
        int x = s.top();
        s.pop();
        Reverse(s);
        reverse(s,x);
    }
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends