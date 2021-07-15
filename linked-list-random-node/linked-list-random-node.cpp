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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    // ListNode* curr=NULL;
    // ListNode* curr2=NULL;
     vector<int>v;
    Solution(ListNode* head) {
        // curr=head;
        // curr2=head;
         while(head!= nullptr){
            v.push_back(head->val);
            head = head->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        // ListNode* ans=curr;
        // if(curr->next!=NULL){
        //     curr=curr->next;
        // }
        // else {
        //     curr=curr2;
        // }
        // return ans->val;
        int l = rand() %v.size();
        return v[l];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */