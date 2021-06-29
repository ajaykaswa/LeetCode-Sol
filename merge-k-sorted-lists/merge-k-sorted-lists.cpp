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
class cmp{
    public:
    bool operator()(ListNode *x,ListNode *y){
        return (x->val>y->val);
    }
};

class Solution {
public:
   
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue< ListNode*,vector< ListNode*>,cmp>pq;
        for(int i=0;i<lists.size();i++){
            if(lists[i])
            pq.push(lists[i]);
        }
            ListNode* head= new ListNode(-1);
        ListNode* current=head;
        while(!pq.empty()){
            ListNode* curr=pq.top();
            pq.pop();
            current->next=curr;
            current=current->next;
            if(curr->next){
                pq.push(curr->next);
            }
        }
        return head->next;
    }
};