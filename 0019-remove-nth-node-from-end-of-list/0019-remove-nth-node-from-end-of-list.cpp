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
    int Len(ListNode*head){
        ListNode*temp=head;

        int len=0;

        while(temp!=NULL){
            len++;
            temp=temp->next;

        }
        return len;
    }

    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return NULL;

        }

        int len=Len(head);

        if(len==n){
            //delete head;
            ListNode*temp=head->next;
            delete head;
            return temp;
        }

        //node from beginiing count
        int k=len-n;
        //prev ko node ke ek piche 
        //curr ko node ke upar lana h

        ListNode*prev=NULL;
        ListNode*curr=head;
        while(k--){
            prev=curr;
            curr=curr->next;
        }

        prev->next=curr->next;

        curr->next=NULL;
        delete curr;
        return head;




    }
};