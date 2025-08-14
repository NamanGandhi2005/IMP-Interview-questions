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
        ListNode*front=head;
        ListNode*back=head;


        while(k>1){
            front=front->next;
            k--;

        }
        while(n--){
            back=back->next;
        }

        cout<<front->val<<endl;
        cout<<back->val<<endl;

        int frontValue=front->val;

        front->val=back->val;
        back->val=frontValue;

        return head;
    }
};