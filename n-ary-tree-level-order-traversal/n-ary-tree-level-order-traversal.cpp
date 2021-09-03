/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
      if(root==NULL) return {};
        vector<vector<int>> ans;
      queue<Node*> q;
      q.push(root);
      while(!q.empty()){
        int n=q.size();
        vector<int> ans1;
        for(int i=0;i<n;i++){
        Node* node=q.front();
          ans1.push_back(node->val);
          q.pop();
          for(auto root:node->children){
            q.push(root);
          }
         }
        ans.push_back(ans1);
      }
      return ans;
    }
};