class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int n = strs[0].size();
        for(int i = 0; i < n; ++i){
            char check = strs[0][i];
            for(int j = 1; j < strs.size(); ++j){
                if(strs[j][i] != check)
                    return ans;
            }
            ans += strs[0][i];
        }
        return ans;
    }
};