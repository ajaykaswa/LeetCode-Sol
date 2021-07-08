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
      vector<TreeNode*> vec;
   
    TreeNode* balanceBST(TreeNode* root) {
        inorder(root);
        return construct(0,vec.size()-1);  
    }
     void inorder(TreeNode* root){
        if(root==NULL) return;
        inorder(root->left);
        vec.push_back(root);
        inorder(root->right);
    }
      TreeNode* construct(int start,int end){
      if (start > end) return NULL;
        int mid = (start + end) / 2;
        TreeNode* root = vec[mid];
        root->left =construct(start, mid - 1);
        root->right = construct(mid + 1, end);
        return root;
    }
};