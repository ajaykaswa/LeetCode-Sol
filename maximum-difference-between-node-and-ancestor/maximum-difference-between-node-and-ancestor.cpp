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
    int max1=0;
    void help(TreeNode* root,int currMax,int currMin){
        if(root==NULL) return;
        currMax=max(currMax,root->val);
        currMin=min(currMin,root->val);
        help(root->left,currMax,currMin);
        help(root->right,currMax,currMin);
        max1=max(max1,abs(currMax-currMin));

    }
    int maxAncestorDiff(TreeNode* root) {
        help(root,root->val,root->val);
        return max1;
    }
};