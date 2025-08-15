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
        int len=0;
        ListNode*temp=head;

        while(temp!=NULL){
            len++;
            temp=temp->next;

        }

        return len;
    }
    ListNode* swapNodes(ListNode* head, int k) {
        if(head==NULL){
            return NULL;

        }

        int len=Len(head);

        int n=len-k;
        ListNode*left=head;
        ListNode*right=head;

        while(k>1){
            left=left->next;
            k--;
        }

        while(n--){
            right=right->next;
        }

        int rightVal=right->val;

        right->val=left->val;

        left->val=rightVal;
        return head;

    }
};