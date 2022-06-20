class Solution {
public:
    static bool compare(string a, string b){
        return a.size() > b.size();
    }
    int minimumLengthEncoding(vector<string>& words) {
        unordered_map<string, int> m;
        int ans = 0, n = words.size();
        for(int i = 0; i < n; ++i){
            ++m[words[i]];
        }
        sort(words.begin(), words.end(), compare);
        for(int i = 0; i < n; ++i){
            int k = words[i].size();
            if(m[words[i]] > 0)
                ans += k + 1;
            for(int j = k - 1; j >= 0; --j){
                string s = words[i].substr(j, k-j);
                m[s] = 0;
            }
        }
        return ans;
    }
};