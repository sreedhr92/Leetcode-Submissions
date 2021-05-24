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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL || head->next==NULL)
            return head;
        vector<int> small;
        vector<int> big;
        ListNode *temp=head;
        while(head!=NULL)
        {
            if(head->val<x)
                small.push_back(head->val);
            else
                big.push_back(head->val);     
            head=head->next;
        }
        int i=0;
        head=temp;
        while(i<small.size())
        {
            head->val=small[i++];
            head=head->next;
        }
        i=0;
        while(i<big.size())
        {
            head->val=big[i++];
            head=head->next;
        }
        return temp;
        
    }
};
