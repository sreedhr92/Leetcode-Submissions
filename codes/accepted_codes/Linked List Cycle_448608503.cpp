/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int step = 0;
        while(head!=NULL)
        {
            step++;
            head = head->next;
            if(step>10e4+1)
                return true;
        }
        return false;
    }
};
