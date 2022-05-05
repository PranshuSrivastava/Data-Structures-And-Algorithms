class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(!digits.size())
            return ans;
        vector<string> m{
            "",
            "",
            "abc",
            "def",
            "ghi",
            "jkl",
            "mno",
            "pqrs",
            "tuv",
            "wxyz"
        };
        string path = "";
        dfs(digits,path,0,ans,m);
        return ans;
        
    }
    void dfs(string digits, string path, int idx, vector<string>& ans, vector<string> m){
        
        if(idx == digits.size()){
            ans.push_back(path);
            return;
        }
        
        for(auto c : m[digits[idx] - '0'] ){
            path.push_back(c);
            dfs(digits, path, idx+1, ans, m);
            path.pop_back();
        }
        
    }
};