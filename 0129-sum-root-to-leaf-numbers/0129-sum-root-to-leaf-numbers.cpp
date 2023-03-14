/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void solve(TreeNode* root,int s,int &ans){
       s= s*10 + root->val;
       if(root==NULL)return;
       if(root->left==NULL and root->right==NULL ){
         ans += s;
         return;
       }
       if(root->left)solve(root->left,s,ans);
       if(root->right)solve(root->right,s,ans);
       
    }
    int sumNumbers(TreeNode* root) {
        int ans=0;
        int s=0;
        solve(root,s,ans);
        return ans;
    }
};