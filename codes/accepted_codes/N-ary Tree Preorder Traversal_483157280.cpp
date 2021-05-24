/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> output;
    void build(Node *root)
    {
        if(root==NULL)
            return;
        output.push_back(root->val);
        if(root->children.size()==0)
            return;
        for(auto i:root->children)
            build(i);
    }
    vector<int> preorder(Node* root) {
        build(root);
        return output;
        
    }
};
