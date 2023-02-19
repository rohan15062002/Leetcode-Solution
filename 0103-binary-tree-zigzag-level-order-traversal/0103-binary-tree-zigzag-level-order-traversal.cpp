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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        int count=0;
        q.push(root);
        while(q.empty()!=true){
         count++;
         int size=q.size();
         vector<int> level;
         
         for(int i=0;i<size;i++){
         TreeNode* curr=q.front();
         q.pop();
         
         if(curr->left!=NULL)q.push(curr->left);
         if(curr->right!=NULL)q.push(curr->right);
         level.push_back(curr->val);   
         }
         
         if(count%2==0){
           reverse(level.begin(),level.end());
         }
         ans.push_back(level);
        }
        return ans;
    }
};