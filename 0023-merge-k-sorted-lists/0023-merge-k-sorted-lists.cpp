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
    //Naive Approach
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i=0;i<lists.size();i++){
            ListNode* curr=lists[i];
            while(curr!=NULL){
                pq.push(curr->val);
                curr=curr->next;
            }
        }

        
        ListNode* first=NULL;
        ListNode* tail;

        while(pq.empty()==false){
            int x = pq.top();
            
            if(first==NULL){
                first = new ListNode(x);
                tail=first;
            }
            else if(first!=NULL){
               tail->next=new ListNode(x);
               tail=tail->next;
            }
            pq.pop();
        }
        return first;
    }
};