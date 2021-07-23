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
class FindElements {
public:
    unordered_map<int,int> mp;
    
    void preorder(TreeNode* root){
        if(root==NULL) return;
       // if(root->left==NULL ||root->right==NULL) return;
        if(root->left!=NULL) {
            int a=(2*root->val)+1;
            root->left->val=(2*root->val)+1;
            mp[a]++;
        }
        if(root->right!=NULL){
            int a=(2*root->val)+2;
            root->right->val=(2*root->val)+2;
            mp[a]++;
        }
        preorder(root->left);
        preorder(root->right);
    }
    FindElements(TreeNode* root) {
        root->val=0;
        mp[0]++;
        preorder(root);
    }
    
    bool find(int target) {
        if(mp.find(target)!=mp.end()) return true;
        else return false;
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */