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
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> s;
        for(auto num:nums){
            s.insert(num);
        }
        int count=0;
        ListNode* curr=head;
        while(curr){
            if(s.find(curr->val)!=s.end()){
               while(curr){
                 if(s.find(curr->val)!=s.end())
                       curr=curr->next;
                 else break;
                }
                count++;
            }
            else 
            curr=curr->next;
        }
        return count;
    }
};