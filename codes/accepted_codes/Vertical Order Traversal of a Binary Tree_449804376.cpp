class Solution {
public:
    map<pair<int,int>,vector<int>> h;
    vector<vector<int>> output;
    void fill_tree(TreeNode* root,int pos,int depth)
    {
        if(root==NULL)
            return;
        h[make_pair(pos,depth)].push_back(root->val);
        fill_tree(root->left,pos-1,depth+1);
        fill_tree(root->right,pos+1,depth+1);        
    }
    void traverse(TreeNode* root)
    {
        fill_tree(root,0,0);
        vector<pair<int,int>> keys;
        for(auto itr:h)
            keys.push_back(itr.first);
        for(int i=0;i<h.size();i++)
        {
            sort(h[keys[i]].begin(),h[keys[i]].end());
            vector<int> a;
            for(auto it:h[keys[i]])
                a.push_back(it);
            while(i+1<h.size() && keys[i].first == keys[i+1].first)
            {
                i++;
                sort(h[keys[i]].begin(),h[keys[i]].end());
                for(auto it:h[keys[i]])
                    a.push_back(it);
            }
            output.push_back(a);
        } 
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        traverse(root);
        return output;        
    }
};
