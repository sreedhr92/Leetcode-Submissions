class Solution {
public:
    vector<vector<string>> output;
    struct trieNode{
        struct trieNode *child[26];
        vector<string> prod;
    };
    struct trieNode *create()
    {
        struct trieNode *root = new trieNode;
        for(int i=0;i<26;i++)
            root->child[i]=NULL;
        return root;
    }
    void insert(struct trieNode *root,string &word)
    {
        struct trieNode *temp = root;
        for(char ch:word)
        {
            int index = ch-'a';
            if(temp->child[index]==NULL)
                temp->child[index]=create();
            temp = temp->child[index];
            if(temp->prod.size()<3)
                temp->prod.push_back(word);
        }
    }
    void search(struct trieNode *root,string &word)
    {
        struct trieNode *temp=root;
        for(char ch:word)
        {
            int index = ch-'a';
            if(temp!=NULL)
            {
                temp=temp->child[index];
                if(temp!=NULL)
                    output.push_back(temp->prod);
                else
                    output.push_back({});
            }
            else
                output.push_back({});
        }
    }
    vector<vector<string>> suggestedProducts(vector<string>& products, string searchWord) {
        sort(products.begin(),products.end());
        struct trieNode *root = create();
        for(string s:products)
            insert(root,s);
        search(root,searchWord);
        return output;
        
    }
};