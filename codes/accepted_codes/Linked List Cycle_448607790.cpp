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
        int count = 10e4+1;
        int step = 0;
        int flag = 1;
        while(head!=NULL)
        {
            step++;
            head = head->next;
            if(step>count)
            {
                flag = 0;
                break;
            }
        }
        if(!flag)
            return true;
        else
            return false;
        
    }
};
