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
    ListNode* deleteDuplicates(ListNode* head) {
          ListNode * curr=head;
        ListNode* prev1 =new ListNode(0);
        ListNode* prev= prev1;
        while(curr){
          if(curr->next&&curr->val==curr->next->val){
              while(curr->next&&curr->val==curr->next->val){
                  curr=curr->next;
              }
          }
            else{
             prev->next=curr;
             prev=curr;
            }
            curr=curr->next;
        }
        prev->next=NULL;
        return prev1->next;
    }
};