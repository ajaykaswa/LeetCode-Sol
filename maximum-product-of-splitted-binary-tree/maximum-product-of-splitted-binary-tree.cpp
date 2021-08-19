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
  vector<long long> vec;
  int mod=pow(10,9)+7;
  int find(TreeNode* root){
    if(root==NULL) return 0;
   int ls= find(root->left);
   int rs= find(root->right);
    int sum=ls+rs+root->val;
     vec.push_back(sum);
    return sum;
   
  }
  
    int maxProduct(TreeNode* root) {
      find(root);
      long long sum=LLONG_MIN;
      int n=vec.size()-1;
      for(int i=0;i<vec.size()-1;i++){
        sum=max(sum,(vec[i])*(vec[n]-vec[i]));
      }
      return sum%mod;
    }
};