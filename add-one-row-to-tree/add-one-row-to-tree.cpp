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
  void help(TreeNode* root,int val,int depth,int h){
    if(root==NULL) return;
    if(h==depth){
        TreeNode* node=root->left;
        root->left=new TreeNode(val);
        root->left->left=node;
     
       TreeNode* node1=root->right;
       root->right=new TreeNode(val);
       root->right->right=node1;
    }
    help(root->left,val,depth,h+1);
    help(root->right,val,depth,h+1);
  }
  
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
        int h=1;
       if (depth == 1) {
            TreeNode *newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
       help(root,val,depth-1,h);
      return root;
    }
};