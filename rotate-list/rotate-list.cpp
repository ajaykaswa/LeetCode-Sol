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
    ListNode* reverse(ListNode* node, int a,int k){
        if(node==NULL) return node;
        ListNode* curr=node,*prev=NULL,* next=NULL;
        while(a>0&&curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
            a--;
        }
        if(k==-1) return prev;
        if(next!=NULL) node->next=reverse(next,k,-1);
        return prev;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL) return head;
        ListNode* curr=head;
        int n=0;
        while(curr!=NULL){
            n++;
            curr=curr->next;
        }
        curr=head;
        k=k%n;
        curr= reverse(curr,n-k,k);
        curr=reverse(curr,n,-1);
        return curr;
        
    }
};