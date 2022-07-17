class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        vector<int> ans(n);
        vector<int> check;
        for(int i = 0; i < n; ++i){
            if(s[i] == c)
                check.push_back(i);
        }
        for(int i = 0; i < n; ++i){
            int mini = n + 1;
            for(int j: check)
                mini = min(mini, abs(j - i));
            ans[i] = mini;
        }
        return ans;
    }
};