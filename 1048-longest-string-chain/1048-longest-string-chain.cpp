class Solution {
public: 
    int longestStrChain(vector<string>& words) {
        sort(words.begin(), words.end(), [](const string&first, string& second){
            return first.size() < second.size();
        } );
        map<string, int> m;
        int count = 0;
        for(string word : words){
            int longest = 0;
            for(int i = 0 ; i < word.size(); ++i){
                string sub = word.substr(0, i) + word.substr(i + 1, word.size() + 1);
                longest = max(longest, m[sub] + 1);
            }
            m[word] = longest;
            count = max(count, longest);
        }
        return count;
    }

};