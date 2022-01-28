class WordDictionary {
public:
    unordered_map<int,vector<string>> words;
    WordDictionary() {
        WordDictionary *words;
    }
        
        bool isEqual(string word1,string word2)
        {
            for(int i=0;i<word1.size();i++)
            {
                if(word2[i]=='.')
                    continue;
                if(word2[i]!=word1[i])
                    return false;
            }
            return true;
        }
        
        
    
    
    void addWord(string word) {
        words[word.size()].push_back(word);
        
    }
    
    bool search(string word) {
        for(auto && s: words[word.size()])
        {
            if(isEqual(s,word))
                return true;
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */