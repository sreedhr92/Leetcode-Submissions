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
        vector<int> binary;        
        while(head!=NULL)
        {
            binary.push_back(head->val);
            head = head -> next;
        }
        int ans=0;
        int n = binary.size()-1;
        for(int i=0;i<binary.size();i++,n--)
        {
            if(binary[i])
                ans+=pow(2,n);
        }
        return ans;
    }
};
