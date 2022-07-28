class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> m(26);
        for(int i = 0; i < 26; ++i)
            m[order[i] - 'a'] = i;
        for(string &word: words){
            for(char &ch: word){
                ch = m[ch - 'a'];
            }
        }
        return is_sorted(words.begin(), words.end());
    }
};