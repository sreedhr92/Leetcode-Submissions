/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right
     (right) {}
 * };
 */
class Solution {
public:
    struct node {
        int row;
        int val;
    };
    
    // nodes in the same row and col will be sorted.
    struct comparator{
        bool operator()(const node&a, const node&b) {
            if(a.row != b.row) return a.row > b.row;
            else return a.val > b.val;
        }
    };
    // travrse all the nodes and push the node to its column queue
    void pre_traverse(TreeNode *root, map<int, priority_queue<node, vector<node>, 
        comparator > > &map, int x, int y) {
        if(root == nullptr) return ;
        map[y].push({x, root->val});
        pre_traverse(root->left, map, x+1, y-1);
        pre_traverse(root->right, map, x+1, y+1);
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        map<int, priority_queue<node, vector<node>, comparator>> col_map;
        pre_traverse(root, col_map, 0, 0);
        vector<vector<int>> res;
        
        // generate result table
        for( auto &pair: col_map) {
            vector<int> tmp;
            while(!pair.second.empty()) {
                tmp.push_back(pair.second.top().val);
                pair.second.pop();
            }
            res.push_back(tmp);
        }
        
        return res;
    }
};
