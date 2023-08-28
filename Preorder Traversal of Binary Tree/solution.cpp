class Solution {
public:
    vector<int>v1;
    void function(TreeNode* root){
      v1.push_back(root->val);
      if(root->left){
        function(root->left);
      }
      if(root->right){
        function(root->right);
      }
    }
    vector<int> preorderTraversal(TreeNode* root) {
      if(root==NULL)
      return v1;
      function(root);
      return v1;
    }
};
