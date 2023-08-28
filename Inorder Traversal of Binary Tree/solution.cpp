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
   vector<int>v1;
   void fun(TreeNode* root){
       if(root->left!=NULL){
       fun(root->left);
       }
       v1.push_back(root->val);
       if(root->right!=NULL){
       fun(root->right);
       }
   }
    vector<int> inorderTraversal(TreeNode* root) {
       if(root==NULL) 
       return v1;
       fun(root);
        return v1;
    }
};
