class Solution {
public:
    vector<vector<string>> ans;
    bool isSafe(int r, int c, vector<string>&v, int n){
        for(int i = 0; i <= r; ++i){
            if(v[i][c] == 'Q')
                return 0;
        }
        int row = r, col = c;
        while(row-- && col--){
            if(v[row][col] == 'Q')
                return 0;
        }
        row = r, col = c;
        while(row-- && col++<n)
        {
            if(v[row][col] == 'Q')
                return 0;
        }
        return 1;
    }
    void helper(int r, vector<string>& v, int n){
        if(r>=n)
            ans.push_back(v);
        for(int i = 0; i < n; ++i){
            if(isSafe(r, i, v, n)){
                v[r][i] = 'Q';
                helper(r+1, v, n);
                v[r][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> v;
        string s(n, '.');
        for(int i = 0; i < n; ++i){
            v.push_back(s);
        }
        helper(0, v, n);
        return ans;
    }
};