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

        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
        return slow;
    }

    ListNode*reverseList(ListNode*head){
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

    bool isPalindrome(ListNode* head) {
        if(head==NULL){
            return NULL;

        }
        if(head->next==NULL){
            return head;
        }

        //find mid and split the list left and right mid

        ListNode*mid=findMid(head);

        //now we have mid separate the listy 

        ListNode*left=head;

        ListNode*right=mid->next;
        mid->next=NULL;


        //reverse the right list 

        ListNode*reversedRight=reverseList(right);

        while(left!=NULL && reversedRight!=NULL){
        
            if(left->val!=reversedRight->val){
                return  false;
            }
            left=left->next;
            reversedRight=reversedRight->next;
        }
        return true;


    }
};