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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* curr1=new ListNode(-1);
        ListNode* curr=curr1;
        int carry=0;
        while(l1||l2||carry!=0){
            int a=(l1)?l1->val: 0;
            int b=(l2)?l2->val: 0;
            
            int sum=a+b+carry;
            carry=sum/10;
            sum=sum%10;
            
            ListNode* node =new ListNode(sum);
            curr->next=node;
            curr=curr->next;
            
            if(l1)l1=l1->next;
            if(l2)l2=l2->next;
        }
        return curr1->next;
    }
};