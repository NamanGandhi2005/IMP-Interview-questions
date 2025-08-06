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
    int solveLen(ListNode*head){
        ListNode*temp=head;
        int len=0;

        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        return len;
    }

    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        int len=solveLen(head);
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;

        }
        ListNode*head2=slow->next;
        slow->next=NULL;



        ListNode*prev=NULL;
        ListNode*curr=head2;

        while(curr!=NULL){
            ListNode*next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        //compare prev and head

        while(head!=NULL && prev!=NULL){
            if(prev->val!=head->val){
                return false;
            }
            prev=prev->next;
            head=head->next;
        }
        return true;
    }
};