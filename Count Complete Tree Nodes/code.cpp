class Solution {
public:
    int countNodes(TreeNode* root) {
     if(root==NULL) {
        return 0;
      }
        int cnt=0;
      if(root!=NULL) {
        cnt++;
      }
      cnt+=countNodes(root->left);
      cnt+=countNodes(root->right);
       return cnt;
    }
};
