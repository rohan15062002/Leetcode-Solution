class Solution {
public:
    string convert(string s, int rows) {
        if(rows==1)return s;
        int n = rows;
        int m = s.size();
        char a[n][m];
        
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
            a[i][j]='#';
          }
        }
        
        int row=0,col=0;
        int i=0;
        while(i<s.size()){
          while(row<n){
            a[row][col]=s[i];
            i++;
            row++;
            if(i>=m)break;
          }
          row--;
          if(i>=m)break;
          while(row>0){
            row--;
            col++;
            cout<<s[i]<<" ";
            a[row][col]=s[i];
            i++;
            if(i>=m)break;
          }
          row++;
          if(i>=m)break;
        }

          
      
        string ans="";
        for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(a[i][j]!='#')ans+=a[i][j];
          }
        }
        return ans;
    }
};