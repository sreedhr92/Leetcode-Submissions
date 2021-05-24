/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    void helper(Node* root)
    {
        if(root==NULL)
            return;
        Node *t1=root->left;
        Node *t2=root->right;
        while(t1!=NULL && t2!=NULL)
        {
            t1->next=t2;
            t1=t1->right;
            t2=t2->left;            
        }
        helper(root->left);
        helper(root->right);
    }
    
    Node* connect(Node* root) {
        if(root==NULL)
            return root;
        helper(root);
        Node *temp=root;
        while(root!=NULL)
        {
            root->next=NULL;
            root=root->right;
        }
        return temp;
        
    }
};
