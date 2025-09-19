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
    ListNode*merge(ListNode*left,ListNode*right){
        ListNode*ans=new ListNode(-1);

        ListNode*temp=ans;

        while(left!=NULL && right!=NULL){
            if(left->val<right->val){
                temp->next=left;
                temp=left;
                left=left->next;
            }
            else{
                temp->next=right;
                temp=right;
                right=right->next;
            }
        }

        while(left!=NULL){
            temp->next=left;
            temp=left;
            left=left->next;
        }

        while(right!=NULL){
            temp->next=right;
            temp=right;
            right=right->next;
        }

        ans=ans->next;
        return ans;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();

        if(n==0){
            return NULL;
        }

        if(n==1){
            return lists[0];
        }
        for(int i=0;i<n-1;i++){
            ListNode*ans=merge(lists[i],lists[i+1]);
            lists[i+1]=ans;

        }
        return lists[n-1];
    }
};