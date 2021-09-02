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
//    void find(Node* root, vector<int>& ans){
//      if(root==NULL) return ;
//        ans.push_back(root->val);
//      for(auto child:root->children){
//        find(child,ans);
//      }
//    }
  
//     vector<int> preorder(Node* root) {
//         vector<int> ans;
//       find(root,ans);
//       return ans;
//     }
// };



 vector<int> preorder(Node* root) {
   if(root==NULL) return {};
   stack<Node*> st;
   st.push(root);
   vector<int>ans;
   while(!st.empty()){
     Node* node=st.top();
     st.pop();
     ans.push_back(node->val);
     int n=node->children.size();
     for(int i=n-1;i>=0;i--){
       st.push(node->children[i]);
     }
   }
   return ans;
 }
};





