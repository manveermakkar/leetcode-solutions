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
    ListNode* sortList(ListNode* head) {
        ListNode* temp=head;
        vector<int>list;
        while(temp!=NULL){
            list.push_back(temp->val);
            temp=temp->next;
        }
        sort(list.begin(),list.end());
        int i=0;
         ListNode* temp2=head;
         while(temp2!=NULL){
            temp2->val=list[i++];
            temp2=temp2->next;
         }
         return head;
    }
};
