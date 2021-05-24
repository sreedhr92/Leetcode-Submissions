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
    int getDecimalValue(ListNode* head) {
        int ans = 0;
        int n = 0;
        ListNode* temp = head;
        while(head!=NULL)
        {
            n++;
            head = head -> next;
        }
        n--;
        head = temp;
        while(head!=NULL)
        {
            if(head->val)
                ans+=pow(2,n);
            head = head -> next;
            n--;
        }
        return ans;
    }
};
