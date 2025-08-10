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

    ListNode*reverse(ListNode*head){
        ListNode*prev=NULL;
        ListNode*curr=head;

        while(curr!=NULL){
            ListNode*newNode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=newNode;
        }
        return prev;
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            return head;
        }

        ListNode*pointer1=head;
        ListNode*pointer2=head;
        ListNode*prevLeft=NULL;


        while(left!=1){
            prevLeft=pointer1;
            pointer1=pointer1->next;
            
            left--;
        }
        while(right!=1){
            pointer2=pointer2->next;
            right--;
        }
        

        if(prevLeft!=NULL){

            prevLeft->next=NULL;
        }
        ListNode*prevRight=pointer2->next;
        pointer2->next=NULL;

        ListNode*reversedHead=reverse(pointer1);
        if(prevLeft!=NULL){

            prevLeft->next=reversedHead;
        }
        ListNode*temp=reversedHead;

        while(temp->next!=NULL){
            temp=temp->next;
        }

        temp->next=prevRight;
        if(prevLeft==NULL){
            return reversedHead;
        }
        return head;



        
        


    }
};