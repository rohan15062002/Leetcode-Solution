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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* head1=NULL;
        ListNode* tail=head;
        ListNode* curr=head;
        int sum=0;
        if(curr->val==0){
          curr=curr->next;
        }
        while(curr){
          if(curr->val!=0){
            sum+=curr->val;
          }
          else if(curr->val==0){
            cout<<sum<<endl;
            if(head1==NULL){
              head1=new ListNode(sum);
              tail=head1;
            }
            else{
              tail->next=new ListNode(sum);
              tail=tail->next;
            }
            sum=0;
          }
          curr=curr->next;
        }
        return head1;
    }
};