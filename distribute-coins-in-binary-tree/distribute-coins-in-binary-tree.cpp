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
    int count=0;
    int DFS(TreeNode* root){
        if(root==NULL) return 0;
        int Left=DFS(root->left);
        int Right=DFS(root->right);
        count+=abs(Left)+abs(Right);
        return root->val+Left+Right-1;
    }
    int distributeCoins(TreeNode* root) {
        DFS(root);
        return count;
    }
};