class WordFilter {
public:
    vector<string> words;
    string prefix, suffix;
    map<string, int> prefSufIndex;
    WordFilter(vector<string>& words) {
        this->words = words; 
        for(int w = (words.size() - 1); w >= 0; w--){
            for(int i = 0; i <= 10 && i <= words[w].size(); i++){
                for(int j = 0; j <= 10 && j <= words[w].size(); j++){
                    if(prefSufIndex.find((words[w].substr(0, i) + "#" + words[w]
                        .substr(words[w].size()-j))) == prefSufIndex.end())
                        prefSufIndex.insert({(words[w].substr(0, i) + "#" + words[w]
                            .substr(words[w].size()-j)), w});
                }
            }
        }
    }
    
    
    int f(string prefix, string suffix) {
        
        if(prefSufIndex.find((prefix + "#" + suffix)) != prefSufIndex.end())
            return prefSufIndex[(prefix + "#" + suffix)];
        else
            return -1;
        
                
    }
        
    
};

/**
 * Your WordFilter object will be instantiated and called as such:
 * WordFilter* obj = new WordFilter(words);
 * int param_1 = obj->f(prefix,suffix);
 */
