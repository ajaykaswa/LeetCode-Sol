/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
      int n=0;
      ListNode* curr=head;
      
//find length  
      
      while(curr!=NULL){
        n++;
        curr=curr->next;
      }
//find k slots and extras
      vector<ListNode*> ans;
      int slot=n/k ,rem=n%k;
      curr=head;
//fill in the ans vector in slots
      
   while(curr){
      
      ans.push_back(curr);
      int slot1=1;
      while(slot1<slot){
        curr=curr->next;
        slot1++;
      }
      if(rem>0&&n>k){
          curr=curr->next;
          rem--;
        }
      ListNode* prev=curr->next;
        curr->next=NULL;
        curr=prev;
     }
//fill if nodes are less
     while(ans.size()!=k){
        ans.push_back(NULL);
      }
      
      return ans;
    }
};