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
    void help(TreeNode* root,int target,int& count){
        if(root==NULL) return;

      if(root->left&&root->left->left==NULL&&root->left->right==NULL&&root->left->val==target){
          root->left=NULL;
          count=1;
      }
     if(root->right&&root->right->left==NULL&&root->right->right==NULL&&root->right->val==target){
          root->right=NULL;
         count=1;
      }
        help(root->left,target,count);
        help(root->right,target,count);
    }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        int count=1;
        while(count!=0){
            count=0;
            help(root,target,count);
        }
       if(root->val==target&&root->left==NULL&&root->right==NULL) return root=NULL;
        return root;
    }
};