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

    ListNode*findMid(ListNode*head){
        ListNode*slow=head;
        ListNode*fast=head;

        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL){
            return NULL;

        }
        if(head->next==NULL){
            //for linked list of size 1 mid is head so return is NULL
            return NULL;
        }

        ListNode*mid=findMid(head);

        
        ListNode*prev=NULL;
        ListNode*curr=head;

        while(curr!=mid){
            prev=curr;
            curr=curr->next;
        }

        //ab curr mid pe h 
        //prev curr ke piche vale node pe h
        

            prev->next=curr->next;
        
        curr->next=NULL;
        delete curr;
        return head;



    }
};