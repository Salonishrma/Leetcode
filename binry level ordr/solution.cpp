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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q1;
        if(root==NULL){
            return ans;
        }
        q1.push(root);
        while(!q1.empty()){
            int s=q1.size();
            vector<int>v1;
            for(int i=0;i<s;i++){
              TreeNode* node=q1.front();
              q1.pop();
              if(node->left!=NULL){
                  q1.push(node->left);
              }
              if(node->right!=NULL){
                  q1.push(node->right);
              }
              v1.push_back(node->val);
            }
            ans.push_back(v1);
        }
        return ans;
    }
};
