class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) {
        vector<vector<int>>a(26);
        for(int i = 0; i < s.size(); ++i){
            a[s[i] - 'a'].push_back(i);
        }
        int ans = words.size();
        for(string word: words){
            int last = -1;
            for(char& c: word){
                auto& indices = a[c - 'a'];
                auto it = upper_bound(indices.begin(), indices.end(), last);
                if(it == indices.end()){
                    --ans;
                    break;
                }
                else{
                    last = *it;
                }
            }
        }
        return ans;
        
    }
};